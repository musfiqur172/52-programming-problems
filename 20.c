#include <stdio.h>
#include <string.h>

int main()
{
    int t, count;
    char str[10001];
    char *word;

    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        word = strtok(str, ",!;?. ");
        count = 0;
        while (word != NULL)
        {
            if (strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, ",!;?. ");
        }
        printf("Count = %d\n", count);
    }

    return 0;
}