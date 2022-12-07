#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int freq[100] = {0}, n, i;
    printf("enter the string\n");
    gets(a);
    n = strlen(a);
    for (i = 0; i < n; i++)
    {
        freq[a[i] - 'a']++;
    }
    for (i = 0; i < n; i++)
    {
        if (freq[a[i] - 'a'] != 0)
        {
            printf("%c:%d\n", a[i],freq[a[i] - 'a']);
            freq[a[i]-'a']=0;
        }
    }
    return 0;
}
