#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int r, z;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    z = r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j < z; j++)
        {
            printf(" ");
        }
        for (k = 1; k < i; k++)
        {
            if (i == r || k == 1)
                printf("%i ", k);
            else
                printf("  ");
        }
        printf("%i\n", i);
        z--;
    }

}
