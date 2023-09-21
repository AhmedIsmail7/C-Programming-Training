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
            printf("* ");
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
    unsigned char c;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = 1; i <= r; i++)
    {
        c = r - i;
        for (j = 1; j < r; j++)
        {
            if (c > 0)
            {
                printf(" ");
                c--;
            }
            else
            {
                printf("* ");
            }
        }
        printf("*\n");
    }
}

