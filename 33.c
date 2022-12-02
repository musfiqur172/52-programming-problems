#include <stdio.h>

int main()
{
    long long int t, a, b, c, i, j;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if (a % c != 0)
        {
            if (a / c == 0)
                a = c;
            else
                a = (a / c) * c + c;
        }
        for (i = a; i <= b; i += c)
        {
            printf("%lld\n", i);
        }

        printf("\n");
    }
    return 0;
}