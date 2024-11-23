#include <stdio.h>

int main(){
	int number;
	    printf("nhap vao so nguyen duong:");
	    scanf("%d",&number);
	if( number % 2 == 0){
		printf("%d la so chan",number);
	}else{
		printf("%d la so le",number);
	}

return 0;
}
