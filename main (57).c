/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
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
    }//armstrong closed
    void main()//creating main function
    {
        int arms=armstrong();//calling the function
        printf("number is %d",arms);
    }//main closed