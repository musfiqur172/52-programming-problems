#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n1, n2, n3, temp, kase;
    scanf("%d", &t);
    for (kase = 1; kase <= t; kase++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        if (n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        printf("Case %d: %d %d %d\n", kase, n1, n2, n3);
    }

    return 0;
}