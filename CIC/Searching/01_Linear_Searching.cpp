#include <stdio.h>
#include <conio.h>

main()
{
	//Deklarasi
	int n, arr[100];
	int search, found = 0;

	printf("======================================\n");
	printf("[ PROGRAM PENCARIAN DATA DI ARRAY ]\n");
	printf("======================================\n");
	printf("\n");

	printf("Masukkan n : ");
	scanf("%d", &n);
	printf("\n");

	for(int i=0; i<n; i++){
		printf("Masukkan angka index ke-%d : ", i+1);
		scanf("%d", &arr[i]); //Read
	}

	printf("\n");
	printf("Masukkan angka yang dicari : ");
	scanf("%d", &search);

	printf("\n");
	for(int j=0; j<n; j++){

		if(arr[j] == search){
			printf("Data %d ditemukan di index ke-%d \n", search, j+1);
			found = 1;
         break;
		}

	}

	if (found != 1){
		printf("Data yang di cari tidak ditemukan!");
	}

	getch();
}