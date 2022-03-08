/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
    char arr[20],i,len=0;
    printf("enter sentence");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    len-1;
    i++;
    while(arr[i]==arr[len])
    {
        i++;
        len--;
        if(len<i)
        break;
    }
    if(len<i)
    puts("palindrome");
    else
    puts("not palindrome");
}
