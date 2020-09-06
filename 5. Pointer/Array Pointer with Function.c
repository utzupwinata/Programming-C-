#include <stdio.h>
int i; // Variabel Global i

int *angka(){						// Fungsi khusus pointer
	static int r[] = {2,4,6,8,10};	// Variabel Static
	return r;
}

main(){
	int *P;
	
	P = angka();	// Tunjuk r[] menggunakan ponter P
	
	for (i=0; i<5; i++) {
		printf("\n Nilai r melalui P = %d", *P+i);// Mengakses nilai r[] melalui P
	}
	
	for (i=0; i<5; i++) {
		printf("\n Alamat r melalui P = %x", P+i);// Mengakses alamat r[] melalui P
	}
}
