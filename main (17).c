/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int t;
    int cube;
    int sum=0;
    printf("enter a number");
    int n;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        int digit=n%10;
        cube=digit*digit*digit;
        sum=sum+cube;
        n=n/10;
    }
    if(t==sum)
    printf("%d is an armstrong number",t);
    else
    printf("%d is not an armstrong number",t);
}