#include <stdio.h>
main(){
	int asli[100], balik[100], jml_data, i;
	
	printf("Masukan jumlah data = "); scanf("%d", &jml_data);	//jml_data = 3
	puts("Bilangan : ");
	
	for(i=0; i<jml_data; i++){				//Input array asli
		printf("Input data ke-%d = ", i);
		scanf("%d", &asli[i]);
		
		//i=0
		//input asli[0] = 90
		
		//i=1
		//input asli[1] = 17
		
		//i=2
		//input asli[2] = 5
	}
	
	for(i=0; i<jml_data; i++){			//Membalikkan output melalui array balik
		balik[i] = asli[jml_data-i-1];
		
		//i = 0
		//balik[i] = asli[jml_data-i-1]
		//balik[0] = asli[3-0-1]
		//balik[0] = asli[2]
		//balik[0] = 5
		
		//i=1
		//balik[i] = asli[jml_data-i-1]
		//balik[1] = asli[3-1-1]
		//balik[1] = asli[1]
		//balik[1] = 17
		
		//i=2
		//balik[i] = asli[jml_data-i-1]
		//balik[2] = asli[3-2-1]
		//balik[2] = asli[0]
		//balik[2] = 90
		
		//i<3 perulangan habis
		
		//balik[100] = {5, 17, 90}
		//asli[100]	= {90, 17, 5}
	}
	
	for(i=0; i<jml_data; i++){		//Cetak array balik
		printf("%d ", balik[i]);
		//balik[100] = {5, 17, 90}
	}
}
