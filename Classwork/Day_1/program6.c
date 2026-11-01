/*
Step 1  Undestand thr program statement
Step 2  Writr the algoritham  
Step 3  Deside the programming language
Step 4  Writr the program 
Step 5  Test the Program
*/

/////////////////////////////////////////////////////////////////////////////
//
//  Step 1 : Undestand thr program statement
//           user is going to enter 2 integer
//           we have to perform addition
//
////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//
//  Step 2 : Writr the algoritham
/*
    START 
       Accept first number as No1
       Accept first number as No2
       Create thr variable as Ans to store thr result
       Perform thr addition and store  into Ans
       Display the result fron ans 
    END   
*/      
////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//
//  Step 3 :  Deside the programming langauge
//            We select the c programming
//
////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//
//  Step 4 :  write a program            
//
////////////////////////////////////////////////////////////////////////////

# include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;    //Business Logic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);
    
    printf("Addition id :%d\n",iResult);

    return 0;
}