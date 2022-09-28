#include<stdio.h>
int main()
{
    char a='A';
    int i,j;
    for ( i = 1; i < 4; i++)
    {
        for ( j = 0; j < i;j++ )
        {
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
    /*#include<stdio.h>
int main()
{
    int i,j,k,n=1;
    for ( i = 1; i < 5; i++)
    {
        for ( k = 0; k < 5-i; )
        {
            printf(" ");
            k++;
        }
        for ( j = 0; j < i; j++)
        {
            printf("%d ", n);
        }
    n++;
    printf("\n");
    }
    
    return 0;
}*/
    return 0;
}
