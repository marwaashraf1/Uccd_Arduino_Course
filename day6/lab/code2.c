#include<stdio.h>
   void sum(int *ptr1 ,int *ptr2);
   
 void main()
{
  int x ,y  ;
  printf("Enter value 1 :\n");
  scanf( " %d" ,&x);
  
  printf("Enter value 2:\n");
  scanf( " %d" ,&y);
  sum (&x,&y);
  

  
 
}

void  sum(int *x ,int *y);
   {
	 int result =  x+y ;
	  printf("the result is :\n %d",& result);

   }