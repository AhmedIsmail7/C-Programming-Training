#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int r, z;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        z = 1;
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%i ", z);
            if (j < i)
            {
                z++;
            }
            else
            {
                z--;
            }
        }
        printf("\n");
    }
}
