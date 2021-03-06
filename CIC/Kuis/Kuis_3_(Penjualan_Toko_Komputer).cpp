/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program menghitung total pembayaran di sebuah toko komputer
*/

#include <conio.h>
#include <stdio.h>
#include <iostream.h>

main()
{
	char kode_barang[20], nama_barang[50];
	int harga_barang, jumlah_barang, biaya_kirim;
   float diskon, besar_diskon, total_bayar, sub_total_bayar;
   char *ket_1, *ket_2, payment_type, jasa_kirim;

   printf("================================================ \n");
   printf("        PROGRAM MENGHITUNG PENGJUALAN				\n");
   printf("              PADA TOKO KOMPUTER	   	    		\n");
   printf("================================================ \n");
   printf("\n");
   getch();

   printf("Masukkan kode barang : ");
   	scanf("%s", &kode_barang);
   printf("Masukkan nama barang : ");
   	scanf("%s", &nama_barang);
   printf("Masukkan harga barang : ");
   	scanf("%d", &harga_barang);
   printf("Masukkan jumlah barnag : ");
   	scanf("%d", &jumlah_barang);
   printf("Masukkan tipe pembayaran : \n");
   printf("\t T => Tunai \n");
   printf("\t K => Kredit \n");
   printf("Tipe pembayaran : ");
   	scanf("%s", &payment_type);
   if(payment_type == 'T' || payment_type == 't'){
   	diskon = 0.1;
      ket_1 = "TUNAI";
   } else {
   	diskon = 0.05;
      ket_1 = "KREDIT";
   }

   sub_total_bayar = harga_barang * jumlah_barang;
   besar_diskon = diskon * sub_total_bayar;

   printf("Apakah ingin menggunakan jasa antar kirim ? [Y/T] : ");
   	scanf("%s", &jasa_kirim);
   if(jasa_kirim == 'Y' || jasa_kirim == 'y') {
   	biaya_kirim = 25000;
      ket_2 = "YA";
   } else {
   	biaya_kirim = 0;
      ket_2 = "TIDAK";
   }

   total_bayar = sub_total_bayar - besar_diskon + biaya_kirim;

   clrscr();
   printf("================================================ \n");
   printf("HASIL \n");
   printf("================================================ \n");
   printf("\n");
   printf("Kode Barang \t : %s \n", kode_barang);
   printf("Nama Barang \t : %s \n", nama_barang);
   printf("Harga Barang\t : %d \n", harga_barang);
   printf("Jumlah Barang\t : %d\n", jumlah_barang);
   printf("Tipe Pembayaran\t : %s\n", ket_1);
   printf("Jasa Kirim \t : %s \n", ket_2);
   printf("Diskon Bayar\t : %2.0f\n", besar_diskon);
   printf("Biaya Kirim \t : %d\n", biaya_kirim);
   printf("================================================ \n");
   printf("TOTAL BAYAR \t : %2.0f\n", total_bayar);

   getch();


}