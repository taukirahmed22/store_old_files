#include <stdio.h>
#include <math.h>
int main()
{
    int sum=0, N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);


    for (i=1; i<=N; i++)
    {   sum = sum + pow(i,i);

    }
    printf("The sum of the series is %d", sum);
    return 0;
}

