#include <stdio.h>
#include <string.h>

void print_reverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    int t, i, k;
    char str[1001], word[1001];
    scanf("%d", &t);

    while (t--)
    {
        scanf(" %[^\n]", str);
        k = 0;
        for (i = 0, k = 0; i < strlen(str); i++)
        {
            if (str[i] != ' ')
            {
                word[k] = str[i];
                k++;
            }
            else
            {
                word[k] = '\0';
                // printf("%s ", word);
                print_reverse(word);
                printf(" ");
                k = 0;
            }
        }
        if (k > 0)
        {
            word[k] = '\0';
            // printf("%s", word);
            print_reverse(word);
        }
        printf("\n");
    }
    return 0;
}