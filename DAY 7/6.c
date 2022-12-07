#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    int la, lb, i = 0, same = 0;
    printf("enter the first string\n");
    gets(a);
    printf("enter the second string\n");
    gets(b);
    la = strlen(a);
    lb = strlen(b);
    if (la != lb)
    {
      printf("not equal\n");
    }
    else
    {
        while (i < la)
        {
            if (a[i] == b[i])
            {
                i++;
            }
            else
                break;
        }
        if (i == la)
        {
            same=1;
           
        }
        if (same==0)
        {
              printf("string are not equal\n");
        }
        else  printf("strings are equal\n");
        
    }

    return 0;
}
