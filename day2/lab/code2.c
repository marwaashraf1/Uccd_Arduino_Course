#include<stdio.h>
void main (){
	int x ;
	
	printf("please Enter number:");
	scanf (" %d" ,& x);
	if (x<50&& x>=0){
		
			printf(" your rating is faild" );

	}
      else if (x<65&& x>=50){
		
			printf("your rating is Normal" );

	}
	else if (x<75&& x>=65){
		
			printf("your rating is good" );

	}
	else if (x<85&& x>=75){
		
			printf("your rating is Very good  " );

	}
	else if (x>=85){
		
			printf("your rating is excellent" );

	}

   

}