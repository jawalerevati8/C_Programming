//Calculate shopping discount

//Input 800  -> paybale amuont = 800.00
//Input 2000 -> paybale amuont = 1800.00
//Input 6000 -> paybale amuont = 4800.00

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{  
    float fDiscount = 0;
    float fFinalAmount = 0;

    if(fAmount < 0)
    {
        printf("Invalid purchese amount \n");
        return;
    }
    if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 10 / 100;
    }
    else 
    {
        fDiscount = fAmount * 20 / 100;
    }
    fFinalAmount = fAmount - fDiscount;
    printf("Payable amount = %.2f\n",fFinalAmount);
   
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter Purches amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}