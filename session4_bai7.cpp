#include <stdio.h>

int main(){
	int year;
	    printf("nhap vao so nam: ");
	    scanf("%d",&year);
	if(year % 400 ==0 || year % 4 == 0 && year % 100 != 0){
		printf("%d la nam nhuan");
	}else{
		printf("khong phai la nam nhuan");
	}
	
	
return 0;
}
