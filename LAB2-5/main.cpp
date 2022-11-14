#include <iostream>

using namespace std;

int main()
{
    int x,y;

    char op = 0;

    int sum, mul, sub;
    float div;

    printf("Enter a number1:\n");
    scanf("%d", &x);
     printf("Enter a number2:\n");
    scanf("%d", &y);
     printf("Enter a operator:\n");
     op=getchar();
    scanf("%c", &op);
     switch(op)
     {
     case'+':
        sum=x+y;
        printf("sum = %d", sum);
    break;

    case'-':
        sub=x-y;
        printf("sub = %d", sub);
    break;

    case'/':
        div=(float)x/y;
        printf("div = %f", div);
    break;

    case'*':
        mul=x*y;
        printf("mul = %d", mul);
    break;

        default:
        break;
     }
    return 0;
}
