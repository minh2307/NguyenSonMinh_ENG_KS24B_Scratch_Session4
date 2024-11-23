#include <stdio.h>

int main(){
	int so_cu,so_moi,so_tien; 
	    printf("chi so cong to dien dau thang: ");
	    scanf("%d",&so_cu);
	    printf("chi so cong to dien cuoi thang: ");
	    scanf("%d",&so_moi);
	int so_dien = so_moi - so_cu ;
	if (so_cu > so_moi ){
		printf("Error");
	}
	if(so_dien <= 50){
		so_tien = so_dien * 10000; 
	}
	else if(so_dien <= 50){
		so_tien = 500000 + (so_dien - 50)*15000;
	}
	else if(so_dien <= 150){
		so_tien = 500000 + 750000 + (so_dien - 100)*20000;
	}
	else if(so_dien <= 200){
		so_tien = 500000 + 750000 + 1000000 + (so_dien - 150)*25000;
	}
	else{
		so_tien = 500000 + 750000 + 1000000 + 1250000 + (so_dien - 200)*30000;
	}
	
	printf("so tien dien ban phai la: %d",so_tien);
	
	
return 0;
}
