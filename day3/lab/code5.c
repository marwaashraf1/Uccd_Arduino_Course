#include<stdio.h>
void main (){
	int  x =0 ;
	printf ( " Enter the Number :" );
	scanf ( " %d" ,& x);
	for (int i=1 ; i <7;i++)
	{
			printf ( " %d x %d = %d \n", x,i,(x*i) );

	}

}