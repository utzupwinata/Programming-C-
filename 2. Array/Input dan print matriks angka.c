//Perlu buat gambaran matriksnya di Power Point!

#include <stdio.h>
main(){
	int A[3][4], B[3][4], C[3][4], i, j;
	puts("Input Matriks A dan B :");
	
	for(i=0; i<=2; i++){
		for(j=0; j<4; j++){
			printf("A[%d][%d] = ", i, j); scanf("%d", &A[i][j]);
			printf("B[%d][%d] = ", i, j); scanf("%d", &B[i][j]);
			puts("");
		}
	}
	
	for(i=0; i<3; i++){
		printf("|");
		for(j=0; j<=3; j++){
			C[i][j] = A[i][j] + B[i][j];	//penjumlahan matriks C=A+B
			printf("%d \t", C[i][j]);		//cetak matriks C
		}
		puts("|");
	}
}
