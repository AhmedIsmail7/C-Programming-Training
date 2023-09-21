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
        for (j = 2; j < l; j++)
        {
            if (i > 0 && i < w - 1)
                printf("  ");
            else
                printf(" *");
        }
        printf(" *\n");
    }

}

