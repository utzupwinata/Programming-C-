#include <stdio.h>
main(){
	typedef int bil_bulat;		//Mengganti nama tipe data
	typedef float bil_desimal;
	
	bil_bulat num1;
	bil_desimal num2;
	
	num1 = 1;
	num2 = 1.345;
	
	printf("\n num1 = %d ", num1);
	printf("\n num2 = %g \n", num2);
}
