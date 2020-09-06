#include <stdio.h>

void cetak(char nama_object, float panjang, float lebar){
	float keliling, luas;
	keliling = (2 * panjang) + (2 * lebar);
	luas	 = panjang * lebar;
	printf("\n\n Data Persegi %c : ", nama_object);
	printf("\n Keliling Persegi = %g", keliling);
	printf("\n Luas Persegi     = %g", luas);
}


main(){
	struct persegi_panjang{
	float panjang, lebar;
	} persegi_A, persegi_B, persegi_C;
	
	printf("\n Input panjang Persegi A = "); scanf("%f", &persegi_A.panjang);
	printf(" Input lebar Persegi A   = "); scanf("%f", &persegi_A.lebar);
	puts("");
	printf(" Input panjang Persegi B = "); scanf("%f", &persegi_B.panjang);
	printf(" Input lebar Persegi B   = "); scanf("%f", &persegi_B.lebar);
	puts("");
	printf(" Input panjang Persegi C = "); scanf("%f", &persegi_C.panjang);
	printf(" Input lebar Persegi C   = "); scanf("%f", &persegi_C.lebar);
	
	cetak('A', persegi_A.panjang, persegi_A.lebar);
	cetak('B', persegi_B.panjang, persegi_B.lebar);
	cetak('C', persegi_C.panjang, persegi_C.lebar);
	puts("");
}
