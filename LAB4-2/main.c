#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 0;
    printf("Select  Y  for CAIRO\n");
    printf("Select  X  for ELWADI\n");
    printf("Select  Z  for WA7AT\n");
    printf("Select ESC for exit\n");

    do
    {
        c = getch();

        switch(c)
        {
            case 'Y':
            case 'y':
                system("cls");
                printf("CAIRO\n");
            break;

            case 'X':
            case 'x':
                system("cls");
                printf("ELWADI\n");
            break;

            case 'Z':
            case 'z':
                system("cls");
                printf("WA7AT\n");
            break;

            case 27:
                system("cls");
                printf("Select  A  for CAIRO\n");
                printf("Select  C  for ELWADI\n");
                printf("Select  L  for WA7AT\n");
                printf("Select ESC for exit\n");
            break;

            default:
                system("cls");
                printf("Error\n");
            break;
        }
    }while(c != 13);

    return 0;
}

