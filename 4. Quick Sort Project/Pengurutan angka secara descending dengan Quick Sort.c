#include <stdio.h>
#include <stdbool.h>
#define MAX 50
int data[MAX], jumlah, i;

void input(){
	puts("");
	printf(" Input jumlah data = "); scanf("%d", &jumlah);
	puts("");
	for (i=0; i<jumlah; i++){
		printf(" Data[%d] = ", i+1); scanf("%d",& data[i]);
	}
}

void cetakGaris(int jumlah_garis){
	puts("\n");
	for (i=0; i<jumlah_garis; i++) {
		printf("+");
	}
	puts("");
}

void cetakData(){
	puts("");
	printf(" [ ");
	for (i=0; i<jumlah; i++) {
		printf("%d, ", data[i]);
	}
	printf("]");
}

void tukar(int num1, int num2){
	int swap = data[num1];
	data[num1] = data[num2];
	data[num2] = swap;
}

int partisi(int kiri, int kanan, int pivot){
	int pointerKiri = kiri-1;
	int pointerKanan = kanan;
	
	while (true) {
		while (data[++pointerKiri] > pivot) {
			//mencari data dengan nilai lebih besar dari pivot
		}
		while (pointerKanan > 0 && data[--pointerKanan] < pivot){
			//mencari data dengan nilai lebih kecil dari pivot
		}
		if (pointerKiri >= pointerKanan) {
			//tukar data atau tukar pivot?
			break;
		}
		else{
			//FALSE =  menukar data
			printf("\n Tukar data : %d dengan %d", data[pointerKiri], data[pointerKanan]);
			tukar(pointerKiri, pointerKanan);
			cetakData();
			puts("");
		}
	}
	
	//TRUE = menukar pivot
	printf("\n Tukar pivot : %d dengan %d", data[kanan], data[pointerKiri]);
	tukar(kanan, pointerKiri);
	cetakData();
	puts("");
	return pointerKiri;
}

void quickSort(int kiri, int kanan){
	if (kanan - kiri <= 0) {
		return;
	}
	else {
		int pivot = data[kanan];
		int partitionPoint = partisi(kiri, kanan, pivot);
		quickSort(kiri,  partitionPoint-1);
		quickSort(partitionPoint+1, kanan);
	}
}

main(){
	input();
	printf("\n Data Tidak Terurut : ");
	cetakData();
	cetakGaris(100);
	quickSort(0, jumlah-1);
	cetakGaris(100);
	printf("\n Data Terurut : ");
	cetakData();
	puts("");
}
