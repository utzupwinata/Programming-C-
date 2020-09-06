#include <stdio.h>
main(){
	char *nama[] = {"RANI", "JONI", "DANI", "DANANG"};
	int i;
	
	for (i=0; i<4; i++){
		printf("\n Nama %d = %s", i+1, nama[i]);
	}
		
}
