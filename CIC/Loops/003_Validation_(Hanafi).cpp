/*
	Nama 	: Ahmad Hanafi
   NIM	: 2017102020
   Kelas : TI - 1/2

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void Validation()
{
	char* username = "admin";
   char* password = "admin";
   char iUser[10], iPass[10];
   bool isValid = false;
	int counter = 0;

   while( (isValid == false) && (counter <= 3) ){
   	printf("Masukkan username : ");
      	scanf("%s", &iUser);

      printf("Masukkan password : ");
      	scanf("%s", &iPass);

   	if(strcmp(iUser, username) == 0  && strcmp(iPass, password) == 0 ) {
      	clrscr();
      	isValid = true;
         printf("Yosh! Anda berhasil login!");
      } else {
      	if((username != iUser) || (password != iPass)) {
         	printf("\aMaaf! Username/Password Salah!\n");
            counter+=1;
         }
      }
   }

   getch();
}
