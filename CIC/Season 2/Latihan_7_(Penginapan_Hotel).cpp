/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Semester: 2 (Dua)
*/
/*
	Program Menghitung Total Pembayaran untuk penginapan tamu pada suatu Hotel
*/

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	//Biodata pengunjunag
	char nama[100];
   int no_ktp;
   char status;

   //Detail penginapan
   int tgl_masuk, tgl_keluar, jum_kamar, lama_inap;
   const float pajak = 0.05;
   float total_bayar, total_harga_kamar;
   int diskon = 20000, harga_kamar;
   float besar_pajak;

   printf("PROGRAM MENGHITUNG TOTAL PEMBAYARAN HOTEL \n");

   printf("\n");
   printf("Masukkan Nomor KTP Anda : ");
   scanf("%d", &no_ktp);
   printf("Masukkan Nama Anda : ");
   scanf("%s", &nama);
   printf("Masukkan Status Anda [M => Menikah, L => Lajang] : ");
   scanf("%s", &status);

   printf("Masukkan Tanggal check in : ");
   scanf("%d", &tgl_masuk);
	printf("Masukkan Tanggal check out : ");
   scanf("%d", &tgl_keluar);

   printf("Masukkan jumlah Kamar yang disewa : ");
   scanf("%d", &jum_kamar);
   printf("Masukkan harga kamar per hari : ");
   scanf("%d", &harga_kamar);

	lama_inap = tgl_keluar - tgl_masuk;
   total_harga_kamar = lama_inap * harga_kamar * jum_kamar;
   besar_pajak = total_harga_kamar * pajak;
   total_bayar = total_harga_kamar - besar_pajak + diskon;

   printf("Total pembayaran adalah : %0.2f ", total_bayar);
   getch();


}
