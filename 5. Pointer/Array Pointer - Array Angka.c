#include <stdio.h>
const int MAX = 5; //Const = variabel yg tdk bisa diubah
main(){
	int d[] = {10, 30, 200, 45, 231};
	int *P[MAX];	//Deklarasi Array Pointer
	int i;
	
	for (i=0; i<MAX; i++) {
		P[i] = &d[i];	// Mengisi/Menunjuk alamat Array
	}
	
	for (i=0; i<MAX; i++) {
		printf("\n Alamat d[%d] = %x", i, P[i]); // Mengakses alamat Array
	}
	
	for (i=0; i<MAX; i++) {
		printf("\n Nilai d[%d] = %d", i, *P[i]); // Mengakses nilai Array
	}
		
}
