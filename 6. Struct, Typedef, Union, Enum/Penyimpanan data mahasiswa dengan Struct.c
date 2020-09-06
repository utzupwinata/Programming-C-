#include <stdio.h>
struct Mahasiswa {
	int nim;			// Semua member pada 1 waktu
	char nama[50];
	float ipk;
} mhs_1, mhs_2, mhs_3;	//Menambahkan struct variable

main(){
	//struct Mahasiswa mhs_1, mhs_2, mhs_3;	// Menambahkan struct variable
	
	printf("\n Input Data Mahasiswa 1");
	printf("\n NIM  = "); scanf("%d", &mhs_1.nim);	// Input ke mhs_1
	printf(" Nama = "); scanf("%s", &mhs_1.nama);
	printf(" IPK  = "); scanf("%f", &mhs_1.ipk);
		
	printf("\n Input Data Mahasiswa 2");
	printf("\n NIM  = "); scanf("%d", &mhs_2.nim);	// Input ke mhs_2
	printf(" Nama = "); scanf("%s", &mhs_2.nama);
	printf(" IPK  = "); scanf("%f", &mhs_2.ipk);
	
	printf("\n Input Data Mahasiswa 3");
	printf("\n NIM  = "); scanf("%d", &mhs_3.nim);	// Input ke mhs_3
	printf(" Nama = "); scanf("%s", &mhs_3.nama);
	printf(" IPK  = "); scanf("%f", &mhs_3.ipk);
	
	printf("\n DATA MAHASISWA : \n");
	
	printf("\n NIM  = %d ", mhs_1.nim);		// Ouput dari mhs_1
	printf("\n Nama = %s ", mhs_1.nama);
	printf("\n IPK  = %g \n", mhs_1.ipk);
	
	printf("\n NIM  = %d ", mhs_2.nim);		// Ouput dari mhs_2
	printf("\n Nama = %s ", mhs_2.nama);
	printf("\n IPK  = %g \n", mhs_2.ipk);
	
	printf("\n NIM  = %d ", mhs_3.nim);		// Ouput dari mhs_2
	printf("\n Nama = %s ", mhs_3.nama);
	printf("\n IPK  = %g \n", mhs_3.ipk);
	
}
