#include <stdio.h>
main(){
	/*char kr;
	printf("Input karakter kesukaan Anda = ");
	kr = getchar();
	printf("\nKarakter kesukaan Anda adalah %c", kr);*/
	
	char nama[50];
	
	printf("Input nama Anda = ");
	gets(nama);
	
	printf("Selamat datang %s", nama);
	
}
