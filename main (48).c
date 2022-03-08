/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int armstrong(int);
void main()
{
    printf("enter a number");
    int s;
    scanf("%d",&s);
    armstrong(s);
}
int armstrong(int n)
{
    int t;int c;int sum=0;
    t=n;
    while(n>0)
    {
        int digit=n%10;
        c=digit*digit*digit;
        sum=sum+c;
        n=n/10;
    }
    if(sum==t)
    return t;
    else
    return 0;
}
