#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[50] = {'\0'}, copied[50] = {'\0'}, ch = 0;
    int i = 0;

    printf("Enter a string : ");

    while(ch != '\n')
    {
        ch = getchar();
        source[i] = ch;
        i++;
    }

    for(i=0; source[i] != '\0'; i++)
    {
        copied[i] = source[i];
    }

    printf("You have written : %s\n", copied);

    return 0;
}

/*int main()
{
 char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
        return 0;
}
*/
