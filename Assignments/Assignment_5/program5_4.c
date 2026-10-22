//Check divisible by 3 and  5

//Input 15 -> Divisible by Both
//Input 9  -> Divisible by 3 only
//Input 10 -> Divisible by 5 only
//Input 7  -> Not Divisible by Either

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{ 
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by both"); 
    } 
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }

}
int main(void)
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}