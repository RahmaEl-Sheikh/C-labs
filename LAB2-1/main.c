#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   if(num> 0){
    printf(" Number is Positive");
   }
   if (num<0)
   {
       printf(" Number is Negative");

   }
   if (num==0)
   {
       printf(" Number is Zero");
   }
   return 0;

}

