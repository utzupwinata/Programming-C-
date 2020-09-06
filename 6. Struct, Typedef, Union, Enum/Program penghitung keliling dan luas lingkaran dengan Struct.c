#include <stdio.h>
main(){
	struct lingkaran{
		float jari2;
		float keliling;
		float luas;
	} A; //nama objek
		
	printf("\n Input jari-jari = "); scanf("%f", &A.jari2);
	A.keliling = 2*3.14*A.jari2;
	A.luas = 3.14*A.jari2*A.jari2;
	printf(" Keliling lingkaran = %g", A.keliling);
	printf("\n Luas lingkaran = %g", A.luas);
	
	printf("\n\n Alamat jari2 = %x", &A.jari2);
	printf("\n Alamat keliling = %x", &A.keliling);
	printf("\n Alamat luas = %x", &A.luas);
}
