#include<stdio.h>
void main ()
{
	int n1,n2,n3;	
printf("please Enter number1:");
	scanf (" %d" ,& n1);
	printf("please Enter number2:");
	scanf (" %d" ,& n2);
	printf("please Enter number3:");
	scanf (" %d" ,& n3);
	if (n1>n2 &&n1>n3)
	{
	printf("Max number is %d" , n1);
	}
	else if  (n2>n1 &&n2>n3)
	{
	printf("Max number is %d" , n2);
	}
	else if  (n3>n1 &&n3>n2)
	{
	printf("Max number is %d" , n3);
	}
	else
	{
		printf(" two or three numbers is equal");
		
	}
}