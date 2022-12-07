#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    int i=0 , j, length=0;
    printf("enter the string\n");
    gets(a);
    while (a[i] != '\0')
    {
        length++;
        i++;
    }
    i = 0;
    j = strlen(a) - 1;
    while (i <= strlen(a) / 2)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else break;
    }
    if (i >= j)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}
