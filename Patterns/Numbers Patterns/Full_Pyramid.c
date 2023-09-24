#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int r, z, c;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    z = r;
    for (i = 1; i <= r; i++)
    {
        c = i;
        for (j = 1; j <= r; j++)
        {
            if (j >= z)
            {
                printf("%i ", c);
                c++;
            }
            else
                printf("  ");
        }
        c -= 2;
        for (k = 2; k <= i; k++)
        {
            printf("%i ", c);
            c--;
        }
        printf("\n");
        z--;
    }
}


