#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int count=0,i=0;
    printf("enter the string\n");
    gets(a);
    while (a[i]!= '\0')
    {
        count++;
        i++;
    }
    printf("the length of string is %d\n", count);
    return 0;
}
