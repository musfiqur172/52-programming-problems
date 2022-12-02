#include <stdio.h>
#include <string.h>

int main()
{
    int t, i;
    int ucount[26], lcount[26];
    char str[1001];
    scanf("%d", &t);
    getchar();

    while (t--)
    {
        scanf(" %[^\n]", str);
        for (i = 0; i < 26; i++)
        {
            ucount[i] = 0;
        }
        for (i = 0; i < 26; i++)
        {
            lcount[i] = 0;
        }
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                lcount[str[i] - 'a']++;
            }
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                ucount[str[i] - 'A']++;
            }
        }
        for (i = 0; i < 26; i++)
        {
            if (ucount[i] != 0)
            {
                printf("%c = %d\n", i + 'A', ucount[i]);
            }
        }
        for (i = 0; i < 26; i++)
        {
            if (lcount[i] != 0)
            {
                printf("%c = %d\n", i + 'a', lcount[i]);
            }
        }
        if (t != 0)
        {
            printf("\n");
        }
    }

    return 0;
}