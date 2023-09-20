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
    for (i = r; i >= 1; i--)
    {
        c = r - i;
        for (j = r; j > 1; j--)
        {
            if (c > 0)
            {
                printf(" ");
                c--;
            }
            else
            {
                printf(" *");
            }
        }
        printf(" *\n");
    }
}
