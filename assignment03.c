#include <stdio.h>
int main()
{
   int a, b, c;
   printf("Enter a :");
   scanf("%d", &a);

   printf("Enter b :");
   scanf("%d", &b);

   printf("Enter c :");
   scanf("%d", &c);

   if (a+b > c && b+c > a && a+c > b)
   {
       printf("Triangle is valid");
   }
   else {
    printf("Triangle is not valid");
   }
 return 0;
}
