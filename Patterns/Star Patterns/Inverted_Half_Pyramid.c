#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = r; i >= 1; i--)
    {
        printf("*");
        for (j = i; j > 1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}
