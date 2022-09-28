#include <stdio.h>
int main()
{
    int i, j, k;
    char c = 'A';
    for (i = 1; i < 5; i++)
    {

        for (j = 0; j < i; j++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
        for (j = 1; j < i; j++)
        {
            c--;
        }
    }

    return 0;
}
