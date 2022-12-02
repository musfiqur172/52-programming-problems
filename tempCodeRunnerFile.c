#include <stdio.h>

int main()
{
    int t, n, m, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &m);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", m);
            }
            printf("\n");
        }
        for (i = 1; i <= n - 1; i++)
        {
            for (j = i; j <= n - 1; j++)
            {
                printf("%d ", m);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}