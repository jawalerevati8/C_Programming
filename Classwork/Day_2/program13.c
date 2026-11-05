#include<stdio.h>
#include<stdlib.h>       
////////////////////////////////////////////////////////////////////////////
//
// Function name: Addition
// Input        : Integer, Integer
// Output       : Integer
// Description  : Perform addition
// Date         : 04/10/2026
// Author       : Revati Rajendra Jawale
//
////////////////////////////////////////////////////////////////////////////

int Addition(
                 int iNo1,  // first input
                 int iNo2   // second input     //K&R Writting
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;    //Business Logic

    return iAns;
}

////////////////////////////////////////////////////////////////////////////
// 
// Entery point of the application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to procede input as is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to procede input as is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);
    
    printf("Addition id :%d\n",iResult);

    return EXIT_SUCCESS;      
}

////////////////////////////////////////////////////////////////////////////
//
// Step 5 :  Test the Program
// 
//  Tested test cases
//--------------------------------------------------------------------------
//   Input1   Input2   Output
//--------------------------------------------------------------------------
//    10        11       21
//    11        0        11
//    0         11       11
//    20        -9       11
//    -9        20       11
//    -20       -11      -31
//---------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////