//bool is write true and false for even and odd
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    bool bRet = false;   //becase this is empty

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("It is Even\n");
    }

    return EXIT_SUCCESS;
}