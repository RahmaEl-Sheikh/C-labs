#include <iostream>

using namespace std;

int main()
{
    char c = 0;

    printf("Enter an alphabet: ");
    c = getchar();
    if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    {
        printf("you entered : %c", c);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
