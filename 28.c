#include <stdio.h>

int main()
{
    int T, i, n, ara[100], sorted;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }
        sorted = 1;
        for (i = 1; i < n; i++)
        {
            if (ara[i - 1] > ara[i])
            {
                sorted = 0;
                break;
            }
        }
        if (sorted)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}