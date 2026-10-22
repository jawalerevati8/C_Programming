//Check triangle validity

//Input 3 4 5 -> Valid Triangle
//Input 1 2 3 -> IValid Triangle
//Input 0 4 5 -> IValid Triangle

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
        iSide1 + iSide2 > iSide3 &&
        iSide1 + iSide3 > iSide2 &&
        iSide3 + iSide2 > iSide1 )
       {
         printf("Valid Triangle");
       }
       else
       {
        printf("Invalid Triangle");
       }
}
int main(void)
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three sides : \n");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}