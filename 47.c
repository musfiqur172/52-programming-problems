#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n1, n2, n, i, j, k;
    int *a, *b, *c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n1);
        a = malloc(n1 * sizeof(int));
        for (i = 0; i < n1; i++)
        {
            scanf("%d", &a[i]);
        }

        scanf("%d", &n2);
        b = malloc(n2 * sizeof(int));
        for (i = 0; i < n2; i++)
        {
            scanf("%d", &b[i]);
        }

        c = malloc((n1 + n2) * sizeof(int));

        i = 0, j = 0, k = 0;

        while (i < n1 && j < n2)
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

        while (i < n1)
        {
            c[k] = a[i];
            k++;
            i++;
        }

        while (j < n2)
        {
            c[k] = b[j];
            k++;
            j++;
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