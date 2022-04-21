#include<stdio.h>
void main (){
	int  ID =0 , pass=0 , x=0 ;
	printf ( " Enter your ID :" );
	scanf ( " %d" ,& ID);
	switch (ID)
	{
		
	case 1234:
	printf ( " Enter your password :" );
	scanf ( " %d" ,& pass);
	 if (pass==7788)
	 {printf ( " welcome ahmed" );}
 
	else {do 
		{
			printf ( " try again:" );
	        scanf ( " %d" ,& pass);
			x+=1;
		}while (x!=2&&pass!=7788);
    	if (pass==7788)
	{printf ( " welcome ahmed" );}
	      else 
	{printf ( " incorrect 3 times ,no more tries" );}
		
	}
	break;
	
	
	
	case 5678:
	printf ( " Enter your password :" );
	scanf ( " %d" ,& pass);
	 if (pass==5566)
	 {printf ( " welcome amr" );}
 
	else {do 
		{
			printf ( " try again:" );
	        scanf ( " %d" ,& pass);
			x+=1;
		}while (x!=2&&pass!=5566);
    	if (pass==5566)
	{printf ( " welcome amr" );}
	      else 
	{printf ( " incorrect 3 times ,no more tries" );}
		
	}
	break;
	
	
	
	case 9870:
	printf ( " Enter your password :" );
	scanf ( " %d" ,& pass);
	 if (pass==1122)
	 {printf ( " welcome wael" );}
 
	else {do 
		{
			printf ( " try again:" );
	        scanf ( " %d" ,& pass);
			x+=1;
		}while (x!=2&&pass!=1122);
    	if (pass==1122)
	{printf ( " welcome wael" );}
	      else 
	{printf ( " incorrect 3 times ,no more tries" );}
		
	}
	break;
	
	default :
		printf ( " you are not register" );
		break;

	}
}