#include <stdio.h>
int main()
{
    int num;
    printf("Enter the year");
    scanf("%d", &num);

    if( num%400==0)
    {
        printf("Leap year");
    }
    else if (num%4==0 && num%100!=0)
    {
        printf("Leap year");
    }

    else
    {
        printf("Not leap year");
    }

    return 0;
}
