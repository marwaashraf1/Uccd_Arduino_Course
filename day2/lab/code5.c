#include<stdio.h>
void main (){
	int x ;
	printf(" please enter your ID:" );
	scanf (" %d" ,& x);
	switch (x)
	{
		case (1234):
			printf(" welcome Ahmed\n" );
			break;
			case (5678):
			printf(" welcome youssef\n" );
			break;
			case (1145):
			printf(" welcome Mina\n" );
			break;
			default :
			printf(" wrong ID\n" );
			break;
	}

}