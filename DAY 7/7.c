#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10];
    int i = 0, j = 0;
    printf("enter the first string\n");
    gets(a);
    printf("enter the second string\n");
        gets(b);
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    printf("final string is:");
    puts(a);
    return 0;
}
