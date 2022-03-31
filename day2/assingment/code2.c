#include<stdio.h>

void main (){
	int ID ,pass ;
	
	printf("please Enter your ID:");
	scanf (" %d" ,& ID);
	if (ID==1234){
		printf("please Enter your Password:");
	    scanf (" %d" ,& pass);
			if (pass==2345)
			{
				printf("Marwa");
			}
			else 
			{
			printf(" Incorrect Password" );

			}
			

	}
	else 
	{
		printf(" Incorrect ID" );
		
	}
}
	