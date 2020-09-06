#include <stdio.h>

main(){
	typedef int bil_bulat;	// ganti nama int menjadi bil_bulat
	typedef float bil_desimal;
	typedef char huruf;
	
	bil_bulat angka1, angka2, hasil; // deklarasi variable
	bil_desimal desimal1, desimal2;
	huruf nama[20];
	
	angka1 = 10;
	angka2 = 16;
	
	hasil = angka1 + angka2;
	
	printf("\n Hasil %d + %d = %d ", angka1, angka2, hasil);
}
