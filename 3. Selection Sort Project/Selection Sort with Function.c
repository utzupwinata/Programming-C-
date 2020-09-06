#include <stdio.h>
int i, x;
void input_data();
void cetak_data1();
void cetak_data2();
void selection();

main(){
	int jumlah_data;
	
	printf("Input jumlah data = "); scanf("%d", &jumlah_data);
	
	int data[jumlah_data];
	
	input_data(data, jumlah_data);
	
	printf("---------Data Tidak Terurut----------");
	cetak_data1(data, jumlah_data);
	
	selection(data, jumlah_data);
	
	printf("\n------------Data Terurut-------------");
	cetak_data1(data, jumlah_data);
	
}

void input_data(int data[], int jumlah_data){
	puts("");
	for (i=0; i<jumlah_data; i++) {
		printf(" Data %d = ", i+1); scanf("%d", &data[i]);
	}
	puts("");
}

void cetak_data1(int data[], int jumlah_data){
	puts("\n");
	printf("{ ");
	for (i=0; i<jumlah_data; i++) {
		printf("%d, ", data[i]);
	}
	puts("}");
}

void cetak_data2(int data[], int jumlah_data,int tukar1,int tukar2){
	puts("\n");
	printf("{ ");
	for (x=0; x<jumlah_data; x++) {
		printf("%d, ", data[x]);
	}
	printf("} <--- tukar %d dengan %d \n", tukar2, tukar1);
}

void selection(int data[],int jumlah_data){
	int kotak1, kotak2, swap, tukar1, tukar2;
	for (i=0; i<jumlah_data; i++) {
		kotak1 = i;
		kotak2 = i+1;
		
		while (kotak2<jumlah_data) {
			if (data[kotak1]<data[kotak2]) {
				kotak2+=1;
			}
			else{
				kotak1 = kotak2;
				kotak2+=1;
			}
		}
		
		if (data[i] != data[kotak1]) {
			tukar1 = data[i];
			tukar2 = data[kotak1];
			
			swap = data[i];
			data[i] = data[kotak1];
			data[kotak1] = swap;
			
			cetak_data2(data, jumlah_data, tukar1, tukar2);
		}
	}
}


