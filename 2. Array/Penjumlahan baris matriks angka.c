//Perlu buat gambaran matriksnya di Power Point!

#include <stdio.h>
main(){
	int A[3][3], jml=0, i, j;
	puts("Input Matriks A");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("A[%d][%d] = ",i ,j); scanf("%d", &A[i][j]);
		}
	}
	
	puts("");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d \t", A[i][j]);
			
			if(i==0){
				jml+=A[i][j];
			}
		}
		puts("");
	}
	
	printf("\nJumlah baris pertama Matriks A = %d", jml);
}
