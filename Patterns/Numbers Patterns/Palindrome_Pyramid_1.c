#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int r, c, z;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        z = 1;
        c = 0;
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%i ", z);
            if (z < i && c == 0)
            {
                z++;
            }
            else
            {
                c = 1;
                z--;
            }
        }
        printf("\n");
    }
}
