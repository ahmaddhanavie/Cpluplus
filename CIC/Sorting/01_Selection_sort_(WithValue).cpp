#include <stdio.h>
#include <conio.h>

main()
{
	int n = 10, arr[10] = {21, 102, 7, 84, 18, 5, 92, 36, 152, 86};

	printf("======================================\n");
	printf("[ PROGRAM PENGURUTAN DATA PADA ARRAY ]\n");
	printf("[       METODE SELECTION SORT        ]\n");
	printf("======================================\n");
	printf("\n");

	printf("\n[ DATA SEBELUM DIURUTKAN ] \n");
	for(int d=0; d<n; d++) {
		printf("%d    ", arr[d]);
	}

	int minIdx;
	int temp;

	printf("\n\n[ DATA SETELAH DIURUTKAN ] \n");
	for (int j = 0; j < n  ; j++){

		minIdx = j;

		for(int k = j + 1; k < n; k++) {
			if(arr[k] < arr[minIdx]) {
				minIdx = k;
			}
		}

		temp = arr[minIdx];
		arr[minIdx] = arr[j];
		arr[j] = temp;
		printf("%d    ", arr[j]);
	}
	getch();
}
