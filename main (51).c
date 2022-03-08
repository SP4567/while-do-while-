/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int armstrong()//creating main function
{
    int n,t;
    int cube=0;
    int sum=0;
    printf("enter a number");
    scanf("%d",&n);
    t=n;
    while(n>0)//checking condition 
    {
        int dig=n%10;
        cube=dig*dig*dig;
        sum=sum+cube;//sum of cube of digits
        n=n/10;
    }
    if(t==sum)//checking condition
    return t;
    else
    return 0;
    }//main closed
    void main()
    {
        int s=armstrong();
        printf("%d",s);
    }