#include <stdio.h>

int main()
{
    char ch;
    short T;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %c", &ch);

        if (ch >= 65 && ch <= 90)
        {
            printf("Uppercase Character\n");
        }
        else if (ch >= 97 && ch <= 122)
        {
            printf("Lowercase Character\n");
        }
        else if (ch >= 48 && ch <= 57)
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }

    return 0;
}