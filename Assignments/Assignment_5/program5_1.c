//find the grater of two number

//Input : 10 50 30 -> 50 is Greater
//Input : 40 40 20 -> 40 is Greater
//Input : 15 15 15 -> 15 is Greater

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond,int iThird)
{
    if((iFirst > iSecond) || (iFirst > iSecond))
    {
        printf("%d is Greater",iFirst);
    } 
    else if((iFirst < iSecond) || (iSecond > iThird))
    {
        printf("%d is Greater",iSecond);
    } 
    else
    {
        printf("%d is Greater",iThird);
    }   
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number : \n");
    scanf("%d",&iValue3);

    FindGreater(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}