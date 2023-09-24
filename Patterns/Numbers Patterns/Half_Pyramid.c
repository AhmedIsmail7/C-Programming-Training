#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }
}
