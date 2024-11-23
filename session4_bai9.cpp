#include <stdio.h>

int main(){
	int month,day,year;
	    printf("nhap vao so ngay: ");
	    scanf("%d",&day);
	    printf("nhap vao so thang: ");
	    scanf("%d",&month);
	    printf("nhap vao so nam: ");
	    scanf("%d",&year);
	if( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
		if( 1 <= day && day <= 31  ){
			printf("ngay %d thang %d nam %d hop le",day,month,year);
		}
		else{
		printf("ngay %d thang %d nam %d khong hop le",day,month,year);
	    }
	}
	else if( month == 4 || month == 6 || month == 9 || month == 11 ){
		if( 1 <= day && day <= 30  ){
			printf("ngay %d thang %d nam %d hop le",day,month,year);
		}
		else{
		printf("ngay %d thang %d nam %d khong hop le",day,month,year);
	    }
	}
	else if( month == 2 ){
        if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
		  if( 1 <= day && day <= 29){
		  	printf("ngay %d thang %d nam %d hop le",day,month,year);
		  }
		  else{
		printf("ngay %d thang %d nam %d khong hop le",day,month,year);
	      }
		}
		else if( 1 <= day && day <= 28 ){
			printf("ngay %d thang %d nam %d hop le",day,month,year);
		}
		else{
		printf("ngay %d thang %d nam %d khong hop le",day,month,year);
	    }
	    
    }
    else{
	    printf("ngay %d thang %d nam %d khong hop le",day,month,year);
	    }  

    
return 0;
}
