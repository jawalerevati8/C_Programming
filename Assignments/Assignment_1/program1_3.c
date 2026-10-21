//program to print 5 to 1 numbers on screen.

#include<stdio.h>
#include<stdlib.h>

int Display()
{
    int iCnt = 0;
    
    iCnt = 1;
    while (iCnt <= 5)
    {
        printf("%d",iCnt);
        iCnt++;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}