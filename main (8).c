/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
 int sum=0;
 int t;int n;
 printf("enter a number");
 scanf("%d",&n);
 t=n;
 do
 {
     int digit=n%10;
     int cube=digit*digit*digit;
     sum=sum+cube;
     n=n/10;
 }while(n>0);
 if(t==sum)
 printf("number is an armstrong %d",t);
 else  printf("number is not an armstrong %d",t);
}