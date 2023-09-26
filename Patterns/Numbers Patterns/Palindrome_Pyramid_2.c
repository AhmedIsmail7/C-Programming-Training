#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int r, c, z;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    z = r;
    for (i = 1; i <= r; i++)
    {
        c = 1;
        for (j = 1; j <= z + (i * 2 - 1); j++)
        {
            if (j < z)
            {
                printf("  ");
            }
            else if (j > z && j < z + i)
            {
                printf("%i ", c);
                c++;
            }
            else if (j >= z + i)
            {
                printf("%i ", c);
                c--;
            }
        }
        printf("\n");
        z--;
    }
}
