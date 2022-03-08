/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int s=0;int p=1;
    printf("enter a number");
    int n;
    scanf("%d",&n);
    while(n>0)
    {
      int d=n%10;
      s=s+d;
      p=p*d;
      n=n/10;
    }
    if(s==p)
    printf("is spy which is equal to %d",s);
    else 
    printf("is not a spy which is equal to %d",s);
}