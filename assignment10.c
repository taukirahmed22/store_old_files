#include <stdio.h>
int main()
{
 int num1, num2, sum, i;
 printf("Enter First Number: ");
 scanf("%d", &num1);
 printf("Enter second Number: ");
 scanf("%d", &num2);

 if(num1<=num2){
 for (i=1; i<=num2; i++){
    if(num1%i==0 && num2%i==0)
    sum=i;
 }
 printf("GCD is: %d", sum);}

 else if (num2<=num1){
    for(i=1; i<=num1; i++){
        if(num2%i==0 && num1%i==0)
        sum=i;
    }
    printf("GCD is: %d", sum);
 }

 return 0;
}
