#include <stdio.h>
#include <string.h>

int main()
{
    char name[20][10000], temp[10000];
    int t, n, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf(" %[^\n]", name[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            printf("%s\n", name[i]);
        }
    }

    return 0;
}