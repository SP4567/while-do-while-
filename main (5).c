/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
  int n;
  int t;
  int digit;
  int r=0;
  printf("enter a number");
  scanf("%d",&n);
  t=n;
  do
  {
      digit=n%10;
      r=(r*10)+digit;
      n=n/10;
     }while(n>0);
  if(t==r)
  printf("is palidrome %d",t);
  else  printf("is not palidrome %d",t);
}