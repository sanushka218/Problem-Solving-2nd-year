#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0;
    printf("enter the string\n");
    gets(a);
    while (a[i]!=0)
    {
        if (a[i]>=97 && a[i]<=123)
        {
            a[i]=a[i]-32;
        }
        else if (a[i]>=65 && a[i]<=91)
        {
            a[i]=a[i]+32;
        }
        i++;
    }
    printf("modified string is:");
    puts(a);
    return 0;
}
