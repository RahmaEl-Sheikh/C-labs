

#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("choose what suits you\n");
    int choice, num, i;
    int fact;

    while(1)
    {
        printf("1. Factorial \n");
        printf("2. Prime\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter number:\n");
                scanf("%d", &num);
                fact = 1;
                for(i = 1; i <= num; i++)
                {
                    fact = fact*i;
                }
                printf("Factorial value of %d is = %lu\n",num,fact);
                break;

            case 2:
                printf("Enter number:\n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("%d is not a prime number\n", num);
                        break;
                    }

                }
                /*
                    Not divisible by any number other
                    than 1 and itself
                */
                if(i == num)
                {
                    printf("%d is a Prime number\n", num);
                    break;
                }

            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);

                if(num%2 == 0) // 0 is considered to be an even number
                    printf("%d is an Even number\n",num);
                else
                    printf("%d is an Odd number\n",num);
                break;

            case 4:
                printf("Coding is Fun !\n");
                exit(0);    // terminates the complete program execution
        }
    }
    printf("Coding is Fun !\n");
    return 0;
}
