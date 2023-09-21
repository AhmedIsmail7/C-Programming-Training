#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = r; i >= 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            if (i == r  || j == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("*\n");
    }
}


