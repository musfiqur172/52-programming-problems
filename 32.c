#include <stdio.h>

int main()
{

    int t, x, n, i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &n);

        if (x > n)
        {
            printf("Invalid!\n");
        }

        for (i = x; i <= n; i += x)
        {
            printf("%d\n", i);
        }
        printf("\n");
    }

    return 0;
}