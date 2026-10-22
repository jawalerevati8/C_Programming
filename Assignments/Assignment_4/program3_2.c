//Write a program which accept number from user and print even factor of that number

//Input : 24
//Output : 1 2 4 6 8 12

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 12; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}