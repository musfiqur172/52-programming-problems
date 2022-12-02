#include <stdio.h>

int main()
{
    int t, n, sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        sum = 0;

        sum += n % 10;
        n /= 10000;
        sum += n % 10;

        printf("Sum = %d\n", sum);
    }
    return 0;
}