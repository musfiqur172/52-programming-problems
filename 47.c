#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n1, n2, n, i, j, k, size;
    int a[101] = {100001}, b[101] = {100001}, c[101] = {0};
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n1);
        for (i = 0; i < n1; i++)
        {
            scanf("%d", &a[i]);
        }

        scanf("%d", &n2);

        for (i = 0; i < n2; i++)
        {
            scanf("%d", &b[i]);
        }
        // n = n1 + n2;
        i = 0, j = 0, k = 0, n = n1 + n2;

        size = n1 > n2 ? n1 : n2;
        while (n--)
        {
            if (a[i] < b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }

        printf("%d", c[0]);
        for (i = 1; i < k; i++)
        {
            printf(" %d", c[i]);
        }
        printf("\n");
    }

    return 0;
}