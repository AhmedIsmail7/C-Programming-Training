#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char i;
    unsigned char j;
    unsigned char r;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    for (i = r; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
