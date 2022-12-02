#include <stdio.h>

int gcd(int x, int y)
{
    int temp;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int lcm(int x, int y)
{
    return (x / gcd(x, y)) * y;
}

int main()
{
    int t, a, b, i;
    scanf("%d", &t);
    while (t--)
    {
        int result;
        scanf("%d %d", &a, &b);
        result = lcm(a, b);
        if (t == 0)
        {
            printf("LCM = %d", result);
            break;
        }
        printf("LCM = %d\n", result);
    }

    return 0;
}