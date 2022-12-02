#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    long long int num;
    double sq_root;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &num);
        sq_root = sqrt(num);
        if (ceil(sq_root) == floor(sq_root))
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