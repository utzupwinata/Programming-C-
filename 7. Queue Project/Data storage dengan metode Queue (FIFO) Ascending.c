#include <stdio.h>
#include <stdbool.h>
#define max 5

int i, idx=0, queue[max];

void Display(){
	printf("\n");
	for (i=0; i<max; i++) {
		printf(" %d <--", queue[i]); // Print data dalam Queue/Antrean
	}
}

void Add(){
	if (idx < max) {	// Input ke dalam Queue ( 5 data )
		printf("\n Input elemen Queue = "); scanf("%d", &queue[idx]);
		idx++;
		Display();
	}
	else {				// Jika data Queue sudah 5, maka "Queue Overflow"
		printf("\n Queue Overflow \n");
		Display();
	}
}

void Delete(){
	if (idx != 0) {		// Jika index Queue !=0, maka elemen bisa dihapus
		printf("\n Delete elemen Queue --> %d \n", queue[0]);
		for (i=1; i<max; i++) {
			queue[i-1] = queue[i];
		}	
		queue[max-1] = 0;
		idx--;
		Display();
	}
	else{			// Jika index Queue sudah 0, maka "Queue Kosong"
		printf("\n Queue Kosong \n");
		Display();
	}
}

main(){
	int pilihan;
	while (true) {
		printf("\n\n ----------------------------------- ");
		printf("\n [1] Add Elemen Queue ");
		printf("\n [2] Delete Elemen Queue ");
		printf("\n [3] Quit Program");
		printf("\n Input Menu Pilihan Anda = "); scanf("%d", &pilihan);
		
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
				printf("\n\n TERIMA KASIH \n\n");
				return 0;	// Keluar Program C
				break;
			}
			default:{	// Pilihan selain yang disediakan
				printf("\n\n MENU PILIHAN TIDAK ADA! \n\n");
				break;
			}
		}
	}
}
