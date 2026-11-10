#include<stdio.h>
#include<stdlib.h>

void MultiDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    MultiDisplay(iValue);

    return EXIT_SUCCESS;
}