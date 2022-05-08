#include<stdio.h>
 void main()
{
  int x = 10;
  int *ptr;
  printf("x before change is %d \n",x);
  ptr=&x;
  *ptr=20;
  printf("x after  change is %d",x);

  
 
}