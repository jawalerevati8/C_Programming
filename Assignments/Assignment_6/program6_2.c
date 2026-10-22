//Check Addmission Eligibility

//Input: 75 18 -> Eligible for Addmission 
//Input: 55 19 -> Not Eligible
//Input: 80 16 -> Not Eligible

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{    
   if((fMarks >= 60) && (iAge >= 17))
   {
       printf("Eligible for Addmission");
   }
   else
   {
      printf("Not Eligible for Addmission");
   }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    printf("Enter Age : \n");
    scanf("%d",&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}