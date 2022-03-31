#include<stdio.h>
void main (){
	int  x ;
	float sum =0 ; 
	for (int i =0 ; i <10; i++)
	{
	printf( "Number-%d :=  " , i );
	scanf( " %d" ,& x);
	sum=sum+x;
	
	}
		printf( "the sum of 10 no is : %f\n" , sum );
		sum =sum/10;
		printf( "theAverage is :  %f " ,sum );

		

}