#include <stdio.h>
 
int main(){
	int a,b,c;
		printf("nhap lan luot ba canh tam giac: ");
		scanf("%d %d %d",&a,&b,&c);
	if( a + b > c && a + c > b && b + c > a ){
		printf("la 3 canh tam giac");
	}
	else{
		printf("khong phia la 3 canh tam giac");
	}
	
	
return 0;
}
