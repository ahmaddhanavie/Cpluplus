/*
	Nama	: Ahmad Hanafi
   Kelas : TI 1/2
   NIM	: 2017102020

	Menghitung biaya menginap di hotel dengan ketentuan sbg berikut :

   a) Seorang tamu dikelompokkan berdasarkan kelas
   b) Seorang tamu boleh memilih fasilitas lebih dari 1
   c) Seorang tamu akan mendapatkan diskon 10% jika seorang member (hanya utk harga kamar)

   ------------------------------------------------------
    Kelas | Harga Kamar |           Fasilitas
          |             | Laundry |    SPA     | Fitness
   ------------------------------------------------------
      1   |    400.000  |  50.000 |   70.000   | 200.000
      2   |    300.000  |  30.000 |   50.000   | 150.000
      3   |    250.000  |  20.000 |   30.000   | 100.000
   ------------------------------------------------------
*/

#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//Membuat fungsi LINE (GARIS)
void line(){
	printf("----------------------------------------------------\n");
}

//Membuat fungsi HEADER (Kepala)
void header(){
   line();
   printf("                 PRIMA KARYA HOTEL\n");
   printf("   Jl. Maju Terus Pantang Mundur, No.99 Cirebon \n");
   line();
}

void copyRight(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("-------- COPYRIGHT � 2018 -- AHMAD HANAFI ----------\n");
}

//Fungsi Main / Utama
main()
{
 	char nama[100], kode_fs[10], status, *ket_stts;
   int kelas;
   float hrg_kmar, diskon, total_b_fs;
   float hrg_l, hrg_s, hrg_f;
   int lama;
   char *ket_fs;
   float total;

	header();
   printf("\n");

   //LIST OF CLASS
   printf("DAFTAR KELAS : \n");
   line();
   printf("       |             |             Fasilitas       |\n");
   printf(" Kelas | Harga Kamar |-----------------------------|\n");
   printf("       |             | Laundry |   SPA   | Fitness |\n");
   line();
   printf("   1   |   400.000   |  50.000 |  70.000 | 200.000 |\n");
   printf("   2   |   300.000   |  30.000 |  50.000 | 150.000 |\n");
   printf("   3   |   250.000   |  30.000 |  40.000 | 100.000 |\n");
   line();
   printf("\n");

   //INPUT
   printf("Masukkan Nama tamu : ");
   	scanf("%s", &nama);
   printf("Masukkan lama menginap : ");
   	scanf("%d", &lama);
   printf("Masukkan kelas [1/2/3] : ");
      scanf("%d", &kelas);
   printf("Maskkan kode fasilitas : \n");
   printf("  [ LSF => Laundry, SPA, Fitness ]\n");
   printf("  [ LS  => Laundry, SPA          ]\n");
   printf("  [ SF  => SPA, Fitness          ]\n");
   printf("  [ LF  => Laundry, Fitness      ]\n");
   printf("  [ L   => Laundry               ]\n");
   printf("  [ S   => SPA                   ]\n");
   printf("  [ F   => Fitness               ]\n");
   printf("Kode fasilitas : ");
      scanf("%s", &kode_fs);
   printf("Masukkan status member :\n");
   printf("  [M => Member ]\n");
   printf("  [N => Non-Member ]\n");
   printf("Staus : ");
      scanf(" %c", &status);

   //PROCCESS
   if (kelas == 1){
      hrg_kmar = 400000;
      hrg_l    = 50000;
      hrg_s    = 70000; 
      hrg_f    = 200000; 
   } else if(kelas == 2){
      hrg_kmar = 300000;
      hrg_l    = 30000;
      hrg_s    = 50000; 
      hrg_f    = 150000; 
   } else {
      hrg_kmar = 250000;
      hrg_l    = 20000;
      hrg_s    = 50000; 
      hrg_f    = 100000; 
   }

   if (strcmp(kode_fs, "LSF") == 0 || strcmp(kode_fs, "lsf") == 0) {
      total_b_fs = hrg_l + hrg_s + hrg_f;
      ket_fs = "Laundry, SPA, Fitness";
   } else if(strcmp(kode_fs, "LS") == 0 || strcmp(kode_fs, "ls") == 0) {
      total_b_fs = hrg_l + hrg_s;
      ket_fs = "Laundry, SPA";
   } else if(strcmp(kode_fs, "LF") == 0 || strcmp(kode_fs, "ls") == 0) {
      total_b_fs = hrg_l + hrg_f;
      ket_fs = "Laundry, Fitness";
   } else if(strcmp(kode_fs, "SF") == 0 || strcmp(kode_fs, "sf") == 0) {
      total_b_fs = hrg_f + hrg_s;
      ket_fs = "SPA, Fitness";
   } else if(strcmp(kode_fs, "L") == 0 || strcmp(kode_fs, "l") == 0) {
      total_b_fs = hrg_l;
      ket_fs = "Laundry";
   } else if(strcmp(kode_fs, "F") == 0 || strcmp(kode_fs, "s") == 0) {
      total_b_fs = hrg_f;
      ket_fs = "Fitness";
   } else{
      total_b_fs = hrg_s;
      ket_fs = "SPA";
   }

  //	printf("%2.0f\n", total_b_fs);

   /**/
   if (status == 'M' || status == 'm') {
      diskon = hrg_kmar * 0.1 * lama;
      ket_stts = "MEMBER";
   } else {
      diskon = hrg_kmar * 0;
      ket_stts = "NON-MEMBER";
   }

   total = (hrg_kmar * lama) + total_b_fs - diskon;

   clrscr();
   header();
   printf("\N");

   //OUTPUT
   system("color 1F");
   line();
   printf("HASIL : \n");
   line();
   printf("Nama      : %s\n", nama);
   printf("Status    : %s\n", ket_stts);
   printf("Kelas     : %d\n", kelas);
   printf("Lama inap : %d hari\n", lama);
  	printf("Fasilitas : %s\n", ket_fs);
   line();
   printf("DETAIL HARGA : \n");
   line();
   printf("Harga kamar     : %2.0f\n", hrg_kmar);
   printf("Harga Laundry   : %2.0f\n", hrg_l);
   printf("Harga SPA       : %2.0f\n", hrg_s);
   printf("Harga Fitness   : %2.0f\n", hrg_f);
   printf("Kode Fasilitas  : %s\n", kode_fs);
   printf("Tot. biaya Fas. : %2.0f\n", total_b_fs);
   line();
   printf("Diskon          : %2.0f\n", diskon);
   line();
   printf("TOTAL BIAYA     : %2.0f\n", total);


   copyRight();
   getch();
}