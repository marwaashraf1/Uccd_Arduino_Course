#include<stdio.h>
void main (){
	int x =0 ;
	int  y = 0;
	printf("please Enter working hours :");
	scanf (" %d" ,& x);
	if (x>40){
		
			printf(" your salaty is %d" , (x*50) );

	}
      else{
		x=x*50;
		y=x-(x*0.10);
			printf(" your salaty is %d" , y );

	}

   

}