/*
    Tujuan  : Menjumlahkan 2 variable
    Nama    : Ahmad Hanafi
    NIM     : 2017102020
    Mata Kuliah : Algoritma dan Pemrograman 1
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int a, b, c;

    /* Program Input */
    printf("Masukkan nilai bil A = ");
    scanf("%d", &a);

    printf("Masukkan nilai bil B = ");
    scanf("%d", &b);

    c = a + b;
    /* Program Output */
    system("cls");
    printf("HITUNG NILAI \n");
    printf("NILAI A = %d \n", a);
    printf("NILAI B = %d \n", b);
    printf("==================== \n");
    printf("HASIL A + B = %d \n", c);
    getch();

}
