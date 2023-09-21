#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, w;
    int i, j;
    printf("Please enter rectangle length : ");
    scanf("%i", &l);
    printf("please enter rectangle width : ");
    scanf("%i", &w);
    for (i = 0; i < w; i++)
    {
        printf("*");
        for (j = 1; j < l; j++)
        {
            printf(" *");
        }
        printf("\n");
    }

}
