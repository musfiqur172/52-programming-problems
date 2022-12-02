#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    char line[100000];
    char *p, *e;
    long int input;
    int count;
    while (t--)
    {
        scanf(" %[^\n]", line);
        count = 0;
        p = line;

        for (p = line;; p = e)
        {
            input = strtol(p, &e, 10);
            if (p == e)
            {
                break;
            }
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}