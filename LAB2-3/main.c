#include <stdio.h>
#include <stdlib.h>

int main()
{
int A=0, B=0, C=0;
    printf("Enter the numbers A:\n");
    scanf(" %d", &A);
    printf("Enter the numbers B:\n");
    scanf(" %d", &B);
    printf("Enter the numbers C:\n");
    scanf(" %d", &C);
    if (A>B && A>C)
        printf("%d is the largest number.", A);
        else if (B>A && B>C)
        printf("%d is the largest number.", B);
        else if (C>A&& C>A)
        printf("%d is the largest number.", C);


    return 0;
}
