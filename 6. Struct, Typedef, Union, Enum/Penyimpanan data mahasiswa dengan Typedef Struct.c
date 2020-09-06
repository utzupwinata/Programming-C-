#include <stdio.h> //Program Gagal

typedef struct mahasiswa{
	int nim;
	char *nama;
	float IPK;
}mhs; //Menjadi nama alias struct mahasiswa

main(){
	mhs mhs_1, mhs_2, mhs_3;
	
	printf("\n Input Data Mahasiswa 1 \n");
	printf(" NIM  = "); scanf("%d", &mhs_1.nim);
	printf(" Nama = "); scanf("%s", &mhs_1.nama);
	printf(" IPK  = "); scanf("%f", &mhs_1.IPK);
	
	printf("\n Input Data Mahasiswa 2 \n");
	printf(" NIM  = "); scanf("%d", &mhs_2.nim);
	printf(" Nama = "); scanf("%s", &mhs_2.nama);
	printf(" IPK  = "); scanf("%f", &mhs_2.IPK);
	
	printf("\n Input Data Mahasiswa 3 \n");
	printf(" NIM  = "); scanf("%d", &mhs_3.nim);
	printf(" Nama = "); scanf("%s", &mhs_3.nama);
	printf(" IPK  = "); scanf("%f", &mhs_3.IPK);
		
	printf("\n Data Mahasiswa : \n");
	
	printf("\n Data Mahasiswa 1 : ");
	printf("\n NIM  = %d ", mhs_1.nim);
	printf("\n Nama = %s ", mhs_1.nama);
	printf("\n IPK  = %g \n", mhs_1.IPK);
	
	printf("\n Data Mahasiswa 2 : ");
	printf("\n NIM  = %d ", mhs_2.nim);
	printf("\n Nama = %s ", mhs_2.nama);
	printf("\n IPK  = %g \n", mhs_2.IPK);
	
	printf("\n Data Mahasiswa 3 : ");
	printf("\n NIM  = %d ", mhs_3.nim);
	printf("\n Nama = %s ", mhs_3.nama);
	printf("\n IPK  = %g \n", mhs_3.IPK);
	
}
