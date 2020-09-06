#include <stdio.h>
main(){
	int i, j, data, k, x, bantu, A[100], swap1, swap2;
	
	printf("Input jumlah data = "); scanf("%d", &data);
	puts("\n");
	
	for (i=1; i<=data; i++) {
		printf(" A[%d] = ", i); scanf("%d", &A[i]);
	}
	
	puts("\n");
	puts("---------Data Tidak Terurut----------\n");
	
	printf("{ ");
	for (i=1; i<=data; i++) {
		printf("%d, ", A[i]);
	}
	printf("}");
	
	for (i=1; i<=data; i++) {
		k = i;
		j = i+1;
		
		while (j<=data) {
			if (A[k]<A[j]) { //Ascending A[k]>A[j]; Descending A[k]<A[j]
				k = j;
			}
			else{
				j = j+1;
			}
		}
		
		/*printf("\n{ ");
		for (x=1; x<=data; x++) {
			printf("%d, ", A[x]);
		}
		printf("}");*/
		
		swap1 = A[i];
		swap2 = A[k];
		
		bantu = A[i];
		A[i] = A[k];
		A[k] = bantu;
		
		printf("\n{ ");
		for (x=1; x<=data; x++) {
			printf("%d, ", A[x]);
		}
		printf("} <-- tukar %d dan %d", swap1, swap2);
		
	}
	
	puts("\n");
	puts("------------Data Terurut-------------\n");
	
	printf("{ ");
	for (i=1; i<=data; i++) {
		printf("%d, ", A[i]);
	}
	printf("}");
}
