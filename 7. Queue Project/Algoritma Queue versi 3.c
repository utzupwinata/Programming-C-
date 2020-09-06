#include <stdio.h>
#include <stdbool.h>
#define max 5

int i, limit=0, queue[max];

void Display(){
	puts("\n");
	for (i=0; i<max; i++) {
		printf(" %d <--", queue[i]);
	}
}

void Add(){
	if (limit < max) {
		printf("\n Input elemen Queue = "); scanf("%d", &queue[limit]);
		limit++;
		Display();
	}
	else{
		printf(" \n Queue Overflow ");
		Display();
	}
	
}

void Delete(){
	if (limit != 0) {
		printf("\n Hapus elemen --> %d", queue[0]);
		for (i=1; i<=max-1; i++) {
			queue[i-1] = queue[i];
		}
		queue[max-1] = 0;
		limit--;
		Display();
	}
	else{
		printf("\n Queue Kosong!");
		Display();
	}
}

main(){
	int pilihan;
	while (true) {
		printf("\n\n =========================== \n\n");
		printf(" [1] Add Queue \n");
		printf(" [2] Delete Queue \n");
		printf(" [3] Quit Program \n");
		printf(" Input menu pilihan Anda = "); scanf("%d", &pilihan);
		
		switch (pilihan) {
			case 1:{
				Add();
				break;
			}
			case 2:{
				Delete();
				break;
			}
			case 3:{
				printf("\n Terima kasih \n");
				return 0;
				break;
			}
			default:{
				printf("\n MENU TIDAK TERSEDIA! \n");
				break;
			}
		}
	}
}
