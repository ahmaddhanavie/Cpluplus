/*
	Nama		: Ahmad Hanafi
   NIM		: 2017102020
   Prodi 	: Teknik Informatika
   Semester	: 2 (Dua)

   Program mencari Usia
*/

#include <conio.h>
#include <stdio.h>
#include <iostream.h>

main()
{
	int jam_masuk, jam_keluar, lama_parkir, total_bayar;
   const int max_lama = 12;

   printf("================================================ \n");
   printf("        PROGRAM MENGHITUNG TOTAL BAYAR				\n");
   printf("             	 PADA PARKIRAN 	   	    		\n");
   printf("================================================ \n");
   printf("\n");

   printf("Masukkan jam masuk : ");
   	scanf("%d", &jam_masuk);
	printf("Masukkan jam keluar : ");
   	scanf("%d", &jam_keluar);

   if(jam_keluar < jam_masuk) {
		jam_keluar = jam_keluar + 12;
   }

   lama_parkir = jam_keluar - jam_masuk;
   int lebihan = lama_parkir - 2;
   printf("Lama parkir : %d \n", lama_parkir);
   if(lama_parkir <= 2) {
   	total_bayar = 2000;
   } else {
		total_bayar = 2000 + (lebihan * 500);
   }

	clrscr();
   printf("================================================ \n");
   printf("                 HASIL									\n");
   printf("================================================ \n");
   printf("Jam Masuk \t : %d \n", jam_masuk);
   printf("Jam Keluar \t : %d \n", jam_keluar);
   printf("Lama Parkir \t : %d jam \n", lama_parkir);
   printf("Total Biaya \t : %d \n", total_bayar);

   getch(); 


           
}