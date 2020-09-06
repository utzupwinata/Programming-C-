#include <stdio.h>
main(){
	int x, y, *z;
	
	x = 80;
	y = x;
	z = &y;
	
	printf("Nilai x = %d \n", x);
	printf("Nilai y = %d \n", y);
	puts("");
	printf("Alamat Variable y (HEX) = %x \n", z);
	printf("Alamat Variable y (INT) = %d \n", z);
	puts("");
	printf("Nilai Variable y = %d \n", *z);
	
}
