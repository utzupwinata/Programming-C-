#include <stdio.h>
main(){
	union{
		float luas, keliling;	
	} persegi; //union hanya memiliki objek, bukan nama
	
	float sisi;
	
	printf("\n Input sisi = "); scanf("%f", &sisi);
	persegi.luas = sisi * sisi;
	printf("\n Luas persegi = %g", persegi.luas); //Hanya bisa memakai 1 var dlm 1 waktu
	printf("\n Alamat luas = %x", &persegi.luas);
	persegi.keliling = 4 * sisi;
	printf("\n\n Keliling persegi = %g", persegi.keliling);
	printf("\n Alamat keliling = %x", &persegi.keliling);
	
}
