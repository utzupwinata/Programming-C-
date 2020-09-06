#include <stdio.h>
#include <stdbool.h>
#define max 5

int queue[5];
int rear = -1, bantu = -1, b2 = 0;

void Add(){
	int add;
	
	if (rear == max-1) {
		printf("\n Queue Overflow");
	}
	else{
		printf("\n Input nilai elemen Queue = ");
		scanf("%d", &add);
		rear = rear + 1;
		queue[rear] = add;
		bantu = rear;
	}
}

void Delete(){
	printf("\n Elemen Queue yang dihapus --> %d", queue[rear-bantu]);
	bantu = bantu - 1;
	b2 = b2 + 1;
}

void Display(){
	int i;
	if (bantu == -1) {
		printf("\n Queue Kosong");
	}
	else{
		printf("\n Elemen dalam Queue : \n");
		for (i=rear; i>=b2; i--){
			printf(" --> %d", queue[i]);
		}
	}
}

main(){
	int pilihan;
	
	while(true){
		printf(" \n\n ============================ \n\n");
		printf(" Operasi Queue : \n");
		printf(" [1] Add Queue \n");
		printf(" [2] Delete Queue \n");
		printf(" [3] Display Queue \n");
		printf(" [4] Keluar \n");
		printf(" Input Menu Pilihan Anda = "); scanf("%d", &pilihan);
		
		switch(pilihan){
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
				return 0; //exit(true);
				break;
			}
			default:{
				printf("\n MENU TIDAK TERSEDIA! \n");
				break;
			}
		}
	}
}
