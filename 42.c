#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        while (n >= 0)
        {
            if (n == 0)
                printf("1\n");
            else if (n == 1)
                printf("2 + ");
            else
                printf("2^%d + ", n);
            n--;
        }
    }
    return 0;
}