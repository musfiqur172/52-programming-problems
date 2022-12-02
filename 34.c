#include <stdio.h>

int main()
{

    long long int t, a, b, c, i, d;
    scanf("%lld", &t);

    while (t--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        d = a * b;
        for (i = d; i <= c; i += d)
        {
            printf("%lld\n", i);
        }
        printf("\n");
    }

    return 0;
}