#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}


int main()
{
   int ivalue = 0;

   printf("Enter number : \n");
   scanf("%d",&ivalue);

   OddDisplay(ivalue);
   
   return EXIT_SUCCESS;
}