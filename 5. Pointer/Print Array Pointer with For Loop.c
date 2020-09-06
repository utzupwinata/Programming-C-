#include <stdio.h>

main(){
	const int MAX = 4;
	int i;
	
	char *nama1[] = {"Rani", "Joni", "Dani", "Danang"};
	
	puts("");
	for(i=0; i<MAX; i++){
		printf(" Nama ke-%d = %s \n", i+1, nama1[i]);
	}
	
	/*char *nama;
	
	nama = "\n Rani Suka Uang dan Budi \n";
	
	printf(" %s ", nama);*/
	
}
