//Check Leap Year

//Input 2024 -> Leap Year
//Input 1900 -> Not a Leap year
//Input 2000 -> Leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{    
    if(iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if(iYear % 400 == 0)
    {
        printf("Leap year");
    }
    else if(iYear % 100 == 0)
    {
        printf("Not a Leap year");
    }
    else if(iYear % 4 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }

}
int main()
{
    int iYear = 0;

    printf("Enter Number : \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}