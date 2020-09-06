#include <stdio.h>
main(){
	int variable, *pointer1, **pointer2;
	
	variable = 1000;
	pointer1 = &variable;
	pointer2 = &pointer1;
	
	printf("\n Isi variable = %d ", variable);
	printf("\n Isi pointer1 = %d ", pointer1);
	printf("\n Isi pointer2 = %d ", pointer2);
	puts("");
	printf("\n Nilai variable = %d ", variable);
	printf("\n Nilai pointer1 = %d ", *pointer1);
	printf("\n Nilai pointer2 = %d ", **pointer2);
	
}
