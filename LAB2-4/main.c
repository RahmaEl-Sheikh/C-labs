#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   if(num>= 85){
    printf(" Number is Excellent");
   }
   if (num>=75)
   {
       printf(" Number is Very Good");
   }

   if (num>=65)
   {
       printf(" Number is Good");
   }
   if (num>=50)
   {
       printf(" Number is Pass");

    if (num<50)
   {
       printf(" Number is Fail");
   }

    return 0;

   }
}
