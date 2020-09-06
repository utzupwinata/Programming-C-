#include <stdio.h>
union Mahasiswa{
	int nim;		// 1 member pada 1 waktu
	char *nama;
	float ipk;
} mhs_a, mhs_b, mhs_c;

main(){
	//union Mahasiswa mhs_a, mhs_b, mhs_c;
	
	printf("\n Data Mahasiswa 1 : ");
	mhs_a.nim = 2020470001;	
	printf("\n NIM  = %d ", mhs_a.nim);
	
	mhs_a.nama = "Andi Budi";
	printf("\n Nama = %s ", mhs_a.nama);
	
	mhs_a.ipk = 2.45;
	printf("\n IPK  = %g ", mhs_a.ipk);
	
	
	
	
	printf("\n\n Data Mahasiswa 2 : ");
	mhs_b.nim = 2020470015;		
	printf("\n NIM  = %d ", mhs_b.nim);
	
	mhs_b.nama = "Caca Andhika";
	printf("\n Nama = %s ", mhs_b.nama);
	
	mhs_b.ipk = 3.24;
	printf("\n IPK  = %g ", mhs_b.ipk);
	
	
	
	printf("\n\n Data Mahasiswa 3 : ");
	mhs_c.nim = 2020470060;		
	printf("\n NIM  = %d ", mhs_c.nim);
	
	mhs_c.nama = "Zulkifli Hasan";
	printf("\n Nama = %s ", mhs_c.nama);
	
	mhs_c.ipk = 3.99;
	printf("\n IPK  = %g ", mhs_c.ipk);
	
	
}
