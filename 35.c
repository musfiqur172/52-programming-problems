#include <stdio.h>
#include <math.h>

int main()
{
    int t, xc, yc, r, x, y;
    double d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &xc, &yc);
        scanf("%d", &r);
        scanf("%d %d", &x, &y);

        d = sqrt(pow((xc - x), 2) + pow((yc - y), 2));

        if (d <= (double)r)
            printf("The point is inside the circle\n");
        else
            printf("The point is not inside the circle\n");
    }

    return 0;
}