#include <stdio.h>
#include <math.h>

int main()
{
    long long int t, x, k, i, j, result, power;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld", &x, &k);
        result = 1;
        power = 1;
        for (i = 1; i <= k; i++)
        {
            power *= x;
            result += power;
        }

        printf("Result = %lld\n", result);
    }

    return 0;
}