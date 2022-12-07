#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10],temp;
    int i = 0, count = 0, j = 0;
    printf("enter the string\n");
    gets(a);
    j=strlen(a)-1;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++; j--;
    }
    printf("reversed string is \n");
    puts(a);
    return 0;
}
