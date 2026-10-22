//Identify Character Type

//Input A -> Uppercase Alphabet
//Input m -> Lowercase Alphabet
//Input 7 -> Digit
//Input @ -> special character

#include<stdio.h>
#include<stdlib.h>

void ChecCharaterType(char cValue)
{    
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("special character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    ChecCharaterType(cValue);

    return EXIT_SUCCESS;
}