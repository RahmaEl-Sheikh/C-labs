#include <stdio.h>
#include <stdlib.h>


    int main(){

    int x, y;
    int sum, sub, mul;
    float division;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    sum = x + y;
    sub = x - y;
    mul = x * y;
    division = (float)x / y;


    printf("\nSum = %d", sum);
    printf("\nsubtraction  = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %f", division);


    return 0;
}

