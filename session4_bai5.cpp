#include <stdio.h>

int main(){
	int a,b,c;
	    printf("nhap vao 3 so nguyen :");
	    scanf("%d %d %d",&a,&b,&c);
	if( a < c && c < b || b < c  && c < a ){
		printf("so thu ba nam trong khoang giua so thu nhat va so thu hai");
	}else{
		printf("so thu ba khong nam trong khoang giua so thu nhat va so thu hai");
	}
	
return 0;
}
