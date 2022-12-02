#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, count = 0;
    char str[10001];
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf(" %[^\n]", str);
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ')
                count++;
        }
        printf("Count = %d\n", count + 1);
    }
    return 0;
}