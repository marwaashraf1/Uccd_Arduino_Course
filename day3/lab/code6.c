#include<stdio.h>
void main (){
	int  x =0 , fac =1 ;
	
	printf ( " Enter the Number :" );
	scanf ( " %d" ,& x);
	if (x==0)
	{
			printf ( "factorial= 1"  );

	}
	else if (x==1)
	{
			printf ( "factorial= 1"  );

	}
	else
	{
	 do
	 {
		fac*=x;
		x-=1;
	 }while (x!=1);
	 printf ( "factorial= %d" ,fac );
	}

}