#include <stdio.h>

struct mahasiswa{
	int nim;
	char nama[50];
	float IPK;
};

/*void inputData(int struct_variable, struct mahasiswa mhs){
	printf("\n Input Data Mahasiswa %d : \n", struct_variable);
	printf(" NIM  = "); scanf("%d", &mhs.nim);
	printf(" Nama = "); scanf("%s", &mhs.nama);
	printf(" IPK  = "); scanf("%f", &mhs.IPK);
}*/

void cetakData(struct mahasiswa mhs){
	printf("\n NIM  = %d ", mhs.nim);
	printf("\n Nama = %s ", mhs.nama);
	printf("\n IPK  = %g \n", mhs.IPK);
}

main(){
	struct mahasiswa mhs_1, mhs_2, mhs_3;
	
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
	
	cetakData(mhs_1);
	cetakData(mhs_2);
	cetakData(mhs_3);
	
}
