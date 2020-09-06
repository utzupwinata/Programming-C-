#include <stdio.h>
#include <stdbool.h>
#define max 5

int i, batas = 0, push = 1, queue[max];

void Add(){
	if (batas <= max-1) {
		printf("\n Input elemen Queue = "); scanf("%d", &queue[max-1]);
		for (i=max-1; i>=push; i--) {
			queue[i-1] = queue[i];	//Copy paste tiap elemen
		}
		push++;
		batas++;
		for(i=max-1; i>=batas; i--) {
			queue[i] = 0;			//Sisa elemen nilainya dijadikan nol
		}
	}
	else{
		printf(" \n Queue Overflow ");
	}
}

void Delete(){
	if (batas == 0) {
		printf("\n Queue Kosong! ");
	}
	else{
		printf(" \n Elemen Queue yang dihapus --> %d", queue[0]);
		for (i=0; i<max-1; i++){
			queue[i] = queue[i+1];
		}
		queue[max-1] = 0;
		batas--;
		push--;
	}
	
}

void Display(){
	if (batas == 0){
		printf("\n Queue Kosong! ");
	}
	else{
		printf("\n Elemen dalam Queue : \n");
		for (i=max-1; i>=0; i--) {
			printf(" -->%d ", queue[i]);
		}
	}
}

main(){
	int pilihan;
	while (true) {
		printf(" \n\n ============================= \n\n");
		printf(" [1] Add Queue \n");
		printf(" [2] Delete Queue \n");
		printf(" [3] Display Queue \n");
		printf(" [4] Quit Program \n");
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
				Display();
				break;
			}
			case 4:{
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
