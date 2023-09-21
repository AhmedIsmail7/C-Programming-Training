#include <stdlib.h>
#include <stdio.h>

int main()
{
    int r, i, j, k, z;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    z = r;
    for (i = 1; i <= r; i++)
    {
        for (j = z; j > 1; j--)
        {
            printf(" ");
        }
        for (k = 1; k < i; k++)
        {
            if (i == r || k == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("*\n");
        z--;
    }
}




//This is another solution with less time and memory
#include <stdlib.h>
#include <stdio.h>

int main()
{
    unsigned char i;
    unsigned char j;
    unsigned char r;
    signed char b;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        b = r - i;
        for (j = 1; j < r; j++)
        {
            if (b > 0)
            {
                printf(" ");
                b--;
            }
            else if (b < 0 && i != r)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
                b = -1;
            }
        }
        printf("*\n");
    }
}

