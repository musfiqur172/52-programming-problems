#include <stdio.h>

int main()
{
    int t, n, i, ara[100];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for (i = 0; i < n - 2; i += 2)
        {

            printf("%d ", ara[i]);
        }
        if (i < n)
        {
            printf("%d", ara[i]);
        }
        printf("\n");
    }
    return 0;
}