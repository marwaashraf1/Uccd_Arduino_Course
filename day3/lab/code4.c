#include<stdio.h>
void main (){
	int  x =0 ;
	printf ( " Enter the answer of 3x4= " );
	scanf ( "%d" ,& x);

	while ( x!=12)
	{
		
		printf ( " not correct, please try again:" );
		scanf ( "%d" ,& x);

	}
	
		printf ( "Thank you " );

}