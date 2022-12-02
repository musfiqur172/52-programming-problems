#include <stdio.h>
#include <string.h>

int vowel_count(char s[])
{
    int i, count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t, count;
    char str[1000];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", str);
        printf("Number of vowels = %d\n", vowel_count(str));
    }
    return 0;
}