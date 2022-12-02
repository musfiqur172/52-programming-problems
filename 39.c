#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], rev[1000];
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        scanf("%s", str);

        strcpy(rev, str);
        strrev(rev);

        if (strcmp(str, rev) == 0)
            printf("Yes! It is Palindrome!\n");
        else
            printf("Sorry! It is not Palindrome!\n");
    }

    return 0;
}