//Calculate Electricity bill

//Input : 80  -> 400.00
//Input : 150 -> 850.00 
//Input : 250 -> 1700.00

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0) 
    {
        printf("Invalid unit consumption\n");
    } 
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f\n",fBill);
    } 
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n",fBill);
    }   
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f\n",fBill);
    }
}
int main()
{
    int iUnits= 0;

    printf("Enter Consumed units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}