#include <stdio.h>
#include <stdlib.h>

int main()
{
int y=0;
int sum=0;
 do{
    printf("Enter a Number:\n");
    scanf("%d",&y);
    sum = sum+y;
    //printf("Enter a Number:\n");
    //scanf("%d",sum);

}while(sum<=100);
printf("sum isk %d",sum);
    return 0;
}
