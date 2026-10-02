#include <stdio.h>

int main()
{
    int i, j, spaces, stars;

    for (i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            spaces = i - 1;
            stars = 8 - 2 * i;
        }
        else
        {
            spaces = 7 - i;
            stars = 2 * i - 7;
        }

        for (j = 1; j <= spaces; j++)
            printf(" ");

        for (j = 1; j <= stars; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
