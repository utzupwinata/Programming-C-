#include <stdio.h>
main(){
	int i, j;
	
	float x[3][4] = {1,1,1,1,2,2,2,2,3,3,3,3};
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%g \t", x[i][j]); //Print array x[baris][kolom]
		}
		puts("");
	}
}
