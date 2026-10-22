//Calculate student grade

//Input 85 -> Grade B
//Input 35 -> Fail
//Input 105 -> Invalid Marks

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{  
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks");
    }
    else if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Gread A");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Gread B");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Gread C");
    }
     else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Gread D");
    }
    else
    {
        printf("Fail");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}