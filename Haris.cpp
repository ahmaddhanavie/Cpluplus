#include <conio.h>
#include <stdio.h>
#include <string.h>

void pilihan1(){

    int nilai2, nilai1;
    printf("=========================== \n");
    printf("|  Output Antara 2 Nilai  | \n");
    printf("=========================== \n");
    printf("Masukan Nilai Pertama : ");
    scanf("%d", &nilai1);
    printf("Masukan Nilai Kedua   : ");
    scanf("%d", &nilai2);
    printf("=========================== \n");
    for(int i = nilai1; i <= nilai2; i++){
        printf("nilai : %d \n", i);
    }
}

void pilihan2(){
    int bilangan, pembagi, sisa;
    char ulang = 'y';

    do{
        clrscr();
        printf("============================ \n");
        printf("|  Mencari Sisa Hasil Bagi | \n");
        printf("============================ \n");
        printf("Masukan Bilangan : ");
        scanf("%d", &bilangan);
        printf("Masukan Pembagi  : ");
        scanf("%d", &pembagi);
        printf("============================ \n");
        if(bilangan % pembagi == 0){
            printf("Tidak ada Sisa ! \n");
        }else{
            sisa = bilangan % pembagi;
            printf("Sisa : %d \n", sisa);
        }
        printf("============================ \n");
        printf("ulang ?[Y / N] : ");
        scanf("%s", &ulang);

    }while(ulang == 'y' || ulang == 'Y');
}

void pilihan3(){
    char user[20] = "";
    char pass[20] = "";
    char *ket = "";
    int salah = 0;

    while(user != "admin" && pass != "admin" && salah <= 2){
        clrscr();
        printf("%s \n", ket);
        printf("============================== \n");
        printf("| Validasi User dan Password | \n");
        printf("============================== \n");
		printf("Masukan Username : ");
        scanf("%s", &user);
        printf("Masukan Password : ");
        scanf("%s", &pass);

        if(strcmp(user, "admin") == 0 || strcmp(pass, "admin") == 0){
            printf("Anda Berhasil Masuk !");
            ket = "";
            salah = 5;
        }else{
            printf("Username Atau Password Salah ! \n");
            ket = "Username Atau Password Salah !";
            salah++;
        }
    }
}

void menu(){

    awal:
    int pilihan;

    printf("=============================================== \n");
    printf("|                   Main Menu                 | \n");
    printf("=============================================== \n");
    printf("1. Memunculkan Output Antara Dua Bilangan \n");
    printf("2. Menghitung Sisa Hasil Bagi \n");
    printf("3. Validasi Login Dengan Username dan Password \n");
    printf("4. Keluar \n");
    printf("=============================================== \n");
    printf("Masukan Nomor Menu : ");
    scanf("%d", &pilihan);

    if(pilihan == 1){
        clrscr();
        pilihan1();
    }else if(pilihan == 2){
        clrscr();
        pilihan2();
    }else if(pilihan == 3){
        clrscr();
        pilihan3();
    }else if(pilihan == 4){
        clrscr();
        printf("Silahkan tekan [ENTER] untuk keluar! \n");
    }else{
        printf("maaf pilihan tidak tersedia silahka coba lagi \n");
        goto awal;

    }
}

void main(){
    menu();
    getch();
}
