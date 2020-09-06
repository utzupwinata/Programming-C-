#include <stdio.h>
main(){
	int var;
	int *P1;
	int **P2;
	int ***P3;
	
	var = 700;
	
	P1 = &var;	// P1 menunjuk var
	P2 = &P1;	// P2 menunjuk P1
	P3 = &P2;	// P3 menunjik P2
	
	printf("\n Isi var = %d", var);
	printf("\n Isi P1 = %d", *P1);
	printf("\n Isi P2 = %d", **P2);
	printf("\n Isi P3 = %d", ***P3);
}
