#include <stdio.h>
#include <stdbool.h>
#define MAX 50
int data[MAX], jumlah, i;

void inputData(){					//Fungsi untuk input data
	puts("");
	printf(" Input jumlah data = "); scanf("%d", &jumlah);
	for (i=0; i<jumlah; i++) {
		printf(" Data[%d] = ",i+1); scanf("%d", &data[i]);
	}
}

void cetakGaris(int jumlah_garis){	//Fungsi untuk mencetak garis (+)
	puts("\n ");
	for(i=1; i<=jumlah_garis; i++){
		printf("+");
	}
	puts("");
}

void cetakData(){					//Fungsi untuk mmencetak data (array)	
	printf("\n [ ");
	for(i=0; i<jumlah; i++){
		printf("%d, ", data[i]);
	}
	printf("]");
}

void tukar(int num1, int num2){		// Fungsi untuk menukar data
	int swap = data[num1];
	data[num1] = data[num2];
	data[num2] = swap;
}

int partisi(int kiri, int kanan, int pivot){	//Fungsi untuk menjalankan pointer dan menukar data/pivot
	int pointerKiri = kiri-1;	//Ponter Kiri berada di data paling kiri
	int pointerKanan = kanan;	//Poniter Kanan berada di sebelah pivot
	
	while (true) {
		while (data[++pointerKiri] > pivot){ //pointerKiri < pivot
			//TRUE = ponter kiri (kotak biru) jalan
		}
		while (pointerKanan > 0 && data[--pointerKanan] < pivot) {	//ponterKanan > pivot
			//TRUE = ponter kanan (kotak merah) jalan
		}
		if (pointerKiri >= pointerKanan) { // index kotak biru >= index kotak merah ?
			break;
		}
		else{ //FALSE = SWAP DATA
			printf("\n Tukar Data = %d dengan %d", data[pointerKiri], data[pointerKanan]);
			tukar(pointerKiri, pointerKanan);
			cetakData();
		}
	}
	
	//TRUE = SWAP PIVOT
	printf("\n Tukar Pivot = %d dengan %d", data[kanan], data[pointerKiri]);
	tukar(kanan, pointerKiri);
	cetakData();
	return pointerKiri;
	
}

void quickSort(int kiri, int kanan){			//Fungsi menjalankan QuickSort
	if (kanan-kiri <= 0) {
		return;
	}
	else{
		int pivot = data[kanan];
		int partitionPoint = partisi(kiri, kanan, pivot);
		quickSort(kiri, partitionPoint-1);
		quickSort(partitionPoint+1, kanan);
	}
}

main(){
	inputData();
	puts("\n Data Tidak Terutut:");
	cetakData();
	cetakGaris(100);
	quickSort(0, jumlah-1);
	cetakGaris(100);
	puts("\n Data Terutut:");
	cetakData();
}
