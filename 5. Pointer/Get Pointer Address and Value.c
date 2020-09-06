#include <stdio.h>

const int MAX = 5;

main(){
	int data[] = {10, 30, 200, 45, 231};
	int i, *p[MAX];
	
	for(i=0; i<MAX; i++){
		p[i] = &data[i];
	}
	
	for(i=0; i<MAX; i++){
		printf("Alamat data[%d] \t = %x \n", i, p[i]);
		printf("Alamat data[%d] \t = %d \n", i, p[i]);		
		printf("Nilai data[%d] \t = %d \n", i, *p[i]);
		puts("");
	}
}
