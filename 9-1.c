#include <stdio.h>
#include <math.h>

int main()
{
    int t, num, sq_root;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &num);
        if ((int)sqrt(num) * (int)sqrt(num) == num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}