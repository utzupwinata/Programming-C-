#include <stdio.h>
main(){
	enum hari{
		senin, selasa, rabu=10, kamis, jumat, sabtu, minggu //Nilai sesuai urutan tapi bisa diubah
	};
	
	int i;
	
	for (i=senin; i<=minggu; i++){
		printf("\n %d", i);
	}
}
