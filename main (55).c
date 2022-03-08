/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sumofdigits()//creating main function
{
    int sum=0;
    printf("enter a number");
    int n;
    scanf("%d",&n);
    while(n>0)//checking conditions
    {
    int dig = n % 10;
    n=n/10;
    sum=sum+dig;//calculating sum of digits
    }
    printf("sum is  %d",sum);//printing
    }//sumofdigits closed
void main()
{
    sumofdigits();
}