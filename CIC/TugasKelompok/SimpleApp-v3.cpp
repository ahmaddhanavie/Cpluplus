/*
	TUGAS :

	- LOGIN 3X Salah
	- MASUK KE FORM MENU
		> INVENTORY (TOKO BUKU)
			> BANYAK DATA : (Bebas)
		> TAMPIL DATA
		> EXIT

	- DATA BUKU
	===============================================================================
	  NO  | KODE |			JUDUL BUKU			     |   JENIS   | HARGA SATUAN | JUMLAH
	===============================================================================
	  1   |  001 |    Jalan-jalan di Kota Tua   |  Komik	  |   15.000     | 30
	  2   |  002 |    		Sindo News    		  |  Majalah  |   25.000     | 50
	  3   |  004 |    Kan ku kejar sampai dapat |  Novel	  |   55.000     | 150
	===============================================================================
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char kode[5], judul[100], jenis[100];
	int harga, jumlah;
} Buku;

void line()
{
	printf("============================================== \n");
}

void move()
{
	printf("\n");
}

void changeBackground(char color[20])
{
	if (strcmp(color, "red") == 0){
		system("color 4F");
	} else if(strcmp(color, "blue") == 0) {
		system("color 1F");
	} else if(strcmp(color, "white") == 0) {
		system("color F0");
	} else {
		system("color 0F");
	}
}

void ShowListMenu()
{
	clrscr();
	line();
	printf("         TOKO BUKU SUMBER ILMU \n");
	line();
	move();
	printf("MENU APLIKASI : \n");
	line();
	printf("A > [ INPUT DATA BUKU  ] \n");
	printf("B > [ TAMPIL DATA BUKU ] \n");
	printf("X > [ EXIT PROGRAM     ]\n");
	move();
}

LoginUser()
{
	char user[10], pass[10];
	bool isValid = false;
	int counter = 0;
   	line();
	printf("          AUTHENTICATION USER \n");
   	line();

	move();

	while((isValid == false) && (counter < 3)) {

  		printf("Masukkan Username : ");
		scanf("%s", &user);

		printf("Masukkan password : ");
		scanf("%s", &pass);

		if( (strcmp(user, "admin") == 0) && (strcmp(pass, "admin") == 0) ) {
			changeBackground("default");
			ShowListMenu();
			isValid = true;
		} else {
			printf("\a\a\a\a");
			changeBackground("red");
			move();
			printf("[ USERNAME ATAU PASSWORD ANDA SALAH! ]\n");
			move();
			counter+=1;
		}

		if(counter == 3){
			clrscr();
			changeBackground("red");
			printf("[ ANDA TELAH 3X GAGAL ]\n");
			printf("Silahkan tekan [ENTER] untuk keluar \n");
		}
	}

	return isValid;
}

main()
{
	char kodeMenu[2], backMenu[2];
	bool validKodeMenu = false;
	int nBuku = 0;
	Buku buku[100];
	bool isLogin = LoginUser();

	if(isLogin == true) {
		rootMenu:
			clrscr();
			ShowListMenu();
			do{
				printf("Masukkan kode menu [A/B/X] : ");
				scanf("%s", &kodeMenu);

				if( (strcmp(kodeMenu, "A") == 0) || (strcmp(kodeMenu, "B") == 0) || (strcmp(kodeMenu, "X") == 0)) {
					changeBackground("default");
		  			validKodeMenu = true;
		  		} else {
		  			changeBackground("red");
					printf("\a\a");
					printf("[ KODE MENU YANG ANDA MASUKKAN SALAH! ]");
					move();
					move();
					validKodeMenu = false;
				}
			}while(validKodeMenu == false);

			if (strcmp(kodeMenu, "A") == 0) {
				clrscr();

				do{
					printf("Masukkan banyak buku : ");
					scanf("%d", &nBuku);

					if(nBuku <= 0) {
						changeBackground("red");
						move();
						printf("[ INPUT DATA BUKU MINIMAL 1 ]\n");
						move();
					} else {
						changeBackground("default");
					}
				}while(nBuku <= 0);
				
				int n = nBuku;

				clrscr();
				printf("[ INPUT DATA BUKU ] \n");
				move();
				for(int i=0; i<n; i++) {
					line();
					printf("INPUT DATA BUKU KE-%d \n", i+1);
					line();
					move();

					printf("Masukkan kode buku   : ");
					scanf("%s", &buku[i].kode);

					printf("Masukkan judul buku  : ");
					scanf("%s", &buku[i].judul);

					printf("Masukkan jenis buku  : ");
					scanf("%s", &buku[i].jenis);

					printf("Masukkan harga buku  : ");
					scanf("%s", &buku[i].harga);

					printf("Masukkan jumlah buku : ");
					scanf("%s", &buku[i].jumlah);
					move();
				}

				printf("Apakah Anda ingin kembali ke [MENU AWAL] ? [Y/T] : ");
				scanf("%s", &backMenu);

				if ((strcmp(backMenu, "Y") == 0) || (strcmp(backMenu, "y") == 0)){
					goto rootMenu;
				} else {
					printf("[EXIT]");
				}


			} else if(strcmp(kodeMenu, "B") == 0) {
				clrscr();
				if (nBuku > 0){
		      		int n = nBuku;
					printf("[ OUTPUT DATA BUKU ] \n");
					move();
					for (int j=0; j<n; j++) {
						line();
						printf("OUTPUT DATA BUKU KE-%d \n", j+1);
						line();
						move();
						printf("Kode buku : %s \n", buku[j].kode);
						printf("Judul buku : %s \n", buku[j].judul);
						printf("Jenis buku : %s \n", buku[j].jenis);
						printf("Harga buku : %d \n", buku[j].harga);
						printf("Jumlah buku : %d \n", buku[j].jumlah);
						move();
					}
				} else {
					printf("[ DATA BUKU KOSONG! ] \n");
					printf("Silahkan input data buku terlebih dahulu untuk menampilkan data buku!\n");
					move();
					line();
					move();
				}

				printf("Apakah Anda ingin kembali ke [MENU AWAL] ? [Y/T] : ");
				scanf("%s", &backMenu);

				if ((strcmp(backMenu, "Y") == 0) || (strcmp(backMenu, "y") == 0)){
					changeBackground("default");
					goto rootMenu;
				} else {
					changeBackground("red");
					printf("[EXIT]");
				}
			} else if(strcmp(kodeMenu, "X") == 0) {
				clrscr();
				changeBackground("red");
				printf("[ ANDA TELAH KELUAR! ] \n");
				printf("Silahkan tekan [ENTER] untuk keluar Program! \n");
			}
	}
	getch();
}