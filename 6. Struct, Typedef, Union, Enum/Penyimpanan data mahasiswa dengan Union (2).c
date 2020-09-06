#include <stdio.h>

union Mahasiswa{
	int nim;
	char *nama;
	float ipk;
} mhs_1, mhs_2, mhs_3;

main(){
	
	printf("\n Data Mahasiswa 1 : ");
	mhs_1.nim = 1;
	printf("\n NIM  = %d ", mhs_1.nim);
	mhs_1.nama = "Anto";
	printf("\n Nama = %s ", mhs_1.nama);
	mhs_1.ipk = 1.2;
	printf("\n IPK  = %g \n", mhs_1.ipk);
	
	printf("\n Data Mahasiswa 2 : ");
	mhs_2.nim = 16;
	printf("\n NIM  = %d ", mhs_2.nim);
	mhs_2.nama = "Candice";
	printf("\n Nama = %s ", mhs_2.nama);
	mhs_2.ipk = 2.5;
	printf("\n IPK  = %g \n", mhs_2.ipk);
	
	printf("\n Data Mahasiswa 3 : ");
	mhs_2.nim = 2016470066;
	printf("\n NIM  = %d ", mhs_2.nim);
	mhs_2.nama = "Yusup Hidayat Winata";
	printf("\n Nama = %s ", mhs_2.nama);
	mhs_2.ipk = 3.98;
	printf("\n IPK  = %g \n", mhs_2.ipk);
		
}
