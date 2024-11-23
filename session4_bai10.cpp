#include <stdio.h>

int main(){
	int a,b,c;
	   printf("nhap lan luot vao 3 so nguyen: ");
	   scanf("%d %d %d",&a,&b,&c);
	int number;
	if( a > b ){
		int number = a;
	    a = b;
		b = number;
	}
    if( a > c ){
		int number = a;
		a = c;
		c = number;
	}
	if( b > c ){
		int number = b;
		b = c;
		c = number;
	}
	
	printf("theo thu tu tu be den lon %d %d %d",a,b,c);
}
