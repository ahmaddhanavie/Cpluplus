/*
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Prodi   : Teknik Informatika
    Progaram: Menghitung luas dan keliling lingkaran
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    const float PHI = 3.141592;
    float jari_jari, luas, keliling;

    printf("Masukkan jari-jari = ");
    scanf("%f", &jari_jari);
    luas = PHI * jari_jari * jari_jari;
    keliling = 2 * PHI * jari_jari;
    system("cls");
    printf("Luas Lingkaran \t = %2.2f\n", luas);
    printf("Kelililing Lingkaran \t = %4.0f\n", keliling);
    getch();
}

