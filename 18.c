#include <stdio.h>

int main()
{
    int t, i;
    char str[10001], c;
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            c = str[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                printf("%c", str[i]);
        }
        printf("\n");
        for (i = 0; str[i] != '\0'; i++)
        {
            c = str[i];
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != ' ')
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}