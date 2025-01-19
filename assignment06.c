#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number a:");
    scanf("%d", &a);
    printf("Enter number b:");
    scanf("%d", &b);
    printf("Enter number c:");
    scanf("%d", &c);

    if( a>b && a>c){
        printf("Here a: %d is the maximum number", a);
    }
    else if( b>a && b>c){
        printf("Here b: %d is the maximum number", b);
    }
    else {
        printf("Here c: %d is the maximum number", c);
    }
    return 0;
}
