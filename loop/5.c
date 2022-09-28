#include <stdio.h>
int main()
{
    int i, j, k;
    char c = 'D';
    for (i = 1; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            c++;
            printf("%c", c);
        }
        printf("\n");
        for (j = -1; j < i; j++)
        {
            c--;
        }
    }
    return 0;
}
