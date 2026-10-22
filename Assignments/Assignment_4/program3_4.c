//Accept one character from user and convert case of that character

//Input : a       Output : A
//Input : b       Output :  B

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <='z'))
    {
        printf("%c", CValue -32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue +32);
    }
}
int main()
{
    char CValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&CValue);

    DisplayConvert(CValue);
    return EXIT_SUCCESS;
}