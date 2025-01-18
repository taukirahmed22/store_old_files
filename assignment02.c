#include <stdio.h>
int main()
{
    int s, m, h; //s = second, m = minute, h = hour//
    printf("Enter second = ");
    scanf("%d", &s);

    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s%= 60;

    printf("%dhour(s) %dminute(s) %dsecond(s)", h, m, s);

    return 0;
}
