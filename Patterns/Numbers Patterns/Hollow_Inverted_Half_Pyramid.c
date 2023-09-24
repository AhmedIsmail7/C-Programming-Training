#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int r;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        printf("%i ", i);
        for (j = 2; j <= r - i; j++)
        {
            if (i == 1)
                printf("%i ", j);
            else
                printf("  ");
        }
        if (i != r)
            printf("%i\n", r);
    }
}
