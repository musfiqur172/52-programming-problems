#include <stdio.h>

int main()
{
    int t, p, q, c, i, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &p, &q, &c);
        temp = 1;
        for (i = 1; i <= q; i++)
        {
            temp = (temp * p) % c;
        }

        printf("Result = %d\n", temp % c);
    }
}