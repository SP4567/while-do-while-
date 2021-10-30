# while-do-while-
programs related to while do while 
#include <stdio.h>
void main()
{
    int i;
    int sum=0;
    printf("enter a number");
    long n;
    scanf("%ld",&n);
    while(i<=5)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
        i=i+1;
    }
    printf("sum is  %d",sum);
}
