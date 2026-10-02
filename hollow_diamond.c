#include <stdio.h>

int main()
{
    int i, j, n = 4;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
            printf(" ");

        if (i == 1)
            printf("*");
        else
        {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (j = i; j < n; j++)
            printf(" ");

        if (i == 1)
            printf("*");
        else
        {
            printf("*");
            for (j = 1; j <= 2 * i - 3; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
