//Accept one character from user and check wether that character is vowel(a,e.i.o.u) or not

//Input : E       Output :  TRUE
//Input : d       Output :  FALSE

typedef int BOOL;

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>

BOOL ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u'||
       CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    char CValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&CValue);

    bRet = ChkVowel(CValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else {
        printf("It is not vowel");
    }
    
    return EXIT_SUCCESS;
}