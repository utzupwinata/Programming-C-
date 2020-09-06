#include <stdio.h>
#include <string.h>

main(){
	char temp[256];
	char *nama[5];
	int i, jumlah;
	
	printf("\n Input jumlah mahasiswa = "); scanf("%d", &jumlah);
	puts("\n");
	for(i=0; i<jumlah; i++){
		printf(" Input nama mahasiswa %d = ",i+1);
		scanf("%s", &temp);
		nama[i] = strdup(temp);		
	}
	puts("\n");
	printf(" Data Mahasiswa : \n\n");
	for(i=0; i<jumlah; i++){
		printf(" %d. %s \n", i+1, nama[i]);
	}
	
	
}
