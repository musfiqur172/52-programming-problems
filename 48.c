#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int t, i, n, sum, a;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        sum = (n * (n + 1) / 2);
        for (i = 0; i < n - 1; i++)
        {
            scanf("%lld", &a);
            sum -= a;
        }

        printf("%lld\n", sum);
    }

    return 0;
}