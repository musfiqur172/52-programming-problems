#include <stdio.h>

int main()
{
    int t, n, i, count;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        count = 0;
        while (n > 0)
        {
            count += n / 5;
            n /= 5;
        }

        printf("%d\n", count);
    }

    return 0;
}