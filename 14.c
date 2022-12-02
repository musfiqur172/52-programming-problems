#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, count;
    char first_line[10000], second_line[2];
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        scanf("%[^\n]", first_line);
        scanf("%s", second_line);
        getchar();
        count = 0;
        for (i = 0; i < strlen(first_line); i++)
        {
            if (first_line[i] == second_line[0])
            {
                count++;
            }
        }
        if (count)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", second_line[0], first_line, count);
        }
        else
        {
            printf("'%c' is not present\n", second_line[0]);
        }
    }

    return 0;
}