#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, len, d;
    char n[101], ch;

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%s", n);
        len = strlen(n);
        ch = n[len - 1];
        d = ch - 48;
        if (d % 2)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}