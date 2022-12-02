#include <stdio.h>

long long int fact(long long int n)
{
    long long int i, product = 1;
    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int main()
{
    int t;
    long long int n, i;
    double sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);

        sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum += (double)i / fact(i);
        }

        printf("%0.4lf\n", sum);
    }

    return 0;
}