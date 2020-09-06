#include <stdio.h>
main(){
	enum level { easy=1, medium=50, hard=100};
	
	printf("\n Easy = %d ", easy);
	printf("\n Medium = %d ", medium);
	printf("\n Hard = %d ", hard);
	
	int kali;
	
	kali = hard * medium; // 100 * 50 =5000
	
	printf("\n\n Hasil kali = %d", kali);
	
}
