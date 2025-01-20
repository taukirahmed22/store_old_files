#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter the value of n:");
    scanf("%d", &N);
    printf("1");
    for (i=2; i<=N; i++){
        if(i%2==0){
            printf("-%d", i);
        }
        else{
            printf("+%d", i);
        }
    }
   return 0;
}
