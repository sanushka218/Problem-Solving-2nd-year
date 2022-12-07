#include <stdio.h>
#include <string.h>
int main()
{
    char city[5][10], temp[10];
    int i, j, n;
    printf("enter the number of cities\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the name of city %d:", i+1);
        fflush(stdin);gets(city[i]);
    }  
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i-1; j++)
        {
            if (strcmp(city[j], city[j + 1]) > 0)
            {
                strcpy(temp, city[j]);
                strcpy(city[j], city[j + 1]);
                strcpy(city[j + 1], temp);
            }
        }
    }
    printf("cities in order\n");
    for (i = 0; i < n; i++)
    {
        puts(city[i]);
    }

    return 0;
}
