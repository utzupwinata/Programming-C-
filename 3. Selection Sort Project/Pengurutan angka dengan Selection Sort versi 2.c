#include <stdio.h>
int i;
void cetak_array(int data,int A[]){
	printf("{ ");
	for (i=1; i<=data; i++) {
		printf("%d, ", A[i]);
	}
	puts("}");
}

main(){
	int data, awal, pembanding, bantu;
	printf("Input jumlah data = "); scanf("%d", &data);
	int A[data];
	
	puts("\n");
	for (i=1; i<=data; i++) {
		printf("Input data ke-%d = ", i); scanf("%d", &A[i]);
	}
	
	puts("\n----------Data Tidak Terurut----------\n");
	cetak_array(data, A);
	
	for (i=1; i<=data; i++) {
		awal = i;
		pembanding = i+1;
		
		while (pembanding<=data) {
			if (A[awal]>A[pembanding]) {
				awal = pembanding;
			}
			else{
				pembanding = pembanding+1;
			}
		}
				
		bantu = A[i];
		A[i] = A[awal];
		A[awal] = bantu;
	}
	
	puts("\n-------------Data Terurut-------------\n");
	cetak_array(data, A);
	
}
