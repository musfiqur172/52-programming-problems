#include <stdio.h>

int main()
{
    int n, rev = 0;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        rev = 0;
        while (n != 0)
        {
            rev = rev * 10;
            rev = rev + (n % 10);
            n /= 10;
        }
        printf("%d\n", rev);
    }

    return 0;
}