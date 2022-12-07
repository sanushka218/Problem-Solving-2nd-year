#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int count = 1, i = 0;
    printf("enter the string\n");
    gets(a);
    while (a[i] != '\0')
    {
        if (a[i] == ' ' && a[i + 1] != ' ')
        {
            count++;
        }
        i++;
    }
    printf("total number of words: %d\n", count);

    return 0;
}
