#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number :\n");
    if(scanf("%d",&no) != 1)
    {
        fprintf(stderr, "Invalid inPut\n");

        return EXIT_FAILURE;
    }
   
    Printf("Input is valid :\n");

    return EXIT_SUCCESS;
}