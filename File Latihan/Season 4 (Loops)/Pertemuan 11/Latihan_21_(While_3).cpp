/*
	ALGORITMA mencetak_angka

   DEKLARASI
   	angka : integer
      n : intger

   DESKRIPSI
   	write('Masukkan banyak n : ')
      read(n)

      while(angka <= n) do
      	write(angka)
         angka++
      endwhile
      B6XEpZYqkG

*/

#include <stdio.h>
#include <conio.h>

main()
{
	int angka = 1, n;

   printf("Masukkan banyak n : ");
   	scanf("%d", &n);

   while(angka <= n) {
   	printf("%d \n", angka);
      angka++;
   }
   getch();
}
