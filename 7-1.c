#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, count;
    scanf("%d", &t);

    char line[10000];
    while (t--)
    {
        scanf(" %[^\n]", line);
        count = 1;
        for (i = 0; line[i] != '\0'; i++)
        {
            if (line[i] == ' ')
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}