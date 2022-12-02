#include <stdio.h>
#include <math.h>

int isPerfect(unsigned long long int n)
{
    unsigned long long int sum = 1;

    for (unsigned long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    if (sum == n && n != 1)
        return 1;

    return 0;
}

int main()
{
    int T;
    unsigned long long int n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%llu", &n);

        if (isPerfect(n))
        {
            printf("YES, %llu is a perfect number!\n", n);
        }
        else
        {
            printf("NO, %llu is not a perfect number!\n", n);
        }
    }

    return 0;
}