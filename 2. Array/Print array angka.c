#include <stdio.h>
main(){
	float x[]={9,8,7}, jum=0;
	int i;
	
	for(i=0; i<5; i++){
		jum+=x[i];			//jum=jum+x[i];
		
		//i = 0
		//jum = jum + x[0]
		//jum = 0 + 9 = 9
		
		//i = 1
		//jum = jum + x[1]
		//jum = 9 + 8 = 17
		
		//i = 2
		//jum = jum + x[2]
		//jum = 17 + 7 = 24
		
		//i = 3
		//jum = jum + x[3]
		//jum = 24 + 0 = 24
		
		//i = 4
		//jum = jum + x[4]
		//jum = 24 + 0 = 24
	}
	
	printf("Jumlah = %g", jum);
}
