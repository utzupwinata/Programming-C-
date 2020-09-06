#include <stdio.h>
main(){
	char nama1[20], kar;
	int a;
	
	puts("Masukan nama Anda = "); gets(nama1);
	printf("Masukan angka yang Anda suka = "); scanf("%d", &a);
	
	getchar();
	
	puts("\nHai"); puts(nama1);
	
	puts("Selamat belajar bahasa C");
	printf("Anda menyukai angka %d", a);
	
	getchar();
	
	puts("\nTerima Kasih");	
}
