#include <stdio.h>
int main()
{
    int i, j, k, n = 1;
    for (i = 1; i <= 4; i++)
    {
        n = i;
        for (k = 4; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", n);
            n++;
        }
        n--;
        n--;
        for (j = 1; j < i; j++)
        {
            printf("%d", n);
            n--;
        }

        printf("\n");
    }

    return 0;
}

