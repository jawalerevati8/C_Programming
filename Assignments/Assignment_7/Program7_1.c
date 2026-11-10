#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}