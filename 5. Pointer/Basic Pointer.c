#include <stdio.h>
main(){
	int x;
	int *P;
	
	x = 1000;
	
	P = &x; //mengambil alamat variable x, lalu simpan di pointer P
	
	printf("\n Alamat dari x = %x", P); //Mengakases alamat mengggunakan pointer P
	
	printf("\n Nilai dari x = %d", *P); //Mengakses nilai menggunakan pointer P
	
	*P = 780;	//Memanipulasi nilai menggunakan pointer P
	
	printf("\n\n Isi variabel x saat ini = %d", x);
	
}
