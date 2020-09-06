#include <stdio.h>
int i, j;

int *angkaGenap(){
	static int r[100];
	
	for(i=0; i<100; i++){
		//printf("%d\n",i);
		if(i%2 == 0){
			r[j] = i;
			j++;
		}
	}
	
	return r;
}

main(){
	int *p;
	
	p = angkaGenap();
	
	for(i=0; i<50; i++){
		printf("Isi p[%d]\t= %d\n", i, p[i]);		//Hanya bisa print nilai
		//printf("Isi p[%d]\t= %d\n", i, *(p+i));	//Bisa print nilai dan alamat
		//printf("%d \n", p[i]);
	}
}
