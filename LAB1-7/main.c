#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y, quotient, remainder;
    printf("Enter X: ");
    scanf("%d", &X);
    printf("Enter Y: ");
    scanf("%d", &Y);

    quotient = X / Y;
    remainder = X % Y;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
