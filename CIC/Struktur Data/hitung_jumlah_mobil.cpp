#include <conio.h>
#include <stdio.h>

main()
{
	int jum_penumpang, jum_mobil;

   printf("Masukkan jumlah penumpang : ");
   	scanf("%d", &jum_penumpang);

   if(jum_penumpang <= 7) {
   	jum_mobil = 1;
   } else {
		if(jum_penumpang % 7 == 0) {
      	jum_mobil = (jum_penumpang / 7);
      } else {
      	jum_mobil = ((jum_penumpang % 7) * 7 ) / 7 ;
      }
   }

	printf("Jumlah mobil yang dibutuhkan adalah : %d \n", jum_mobil);
   getch();

}