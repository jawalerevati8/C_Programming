#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    prinf("Enter number \n");
    scanf("%d",&ivalue);
    
    if((ivalue % 2) == 0)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is Odd number");
    }
    return EXIT_SUCCESS;
}