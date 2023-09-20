#include <stdlib.h>
#include <stdio.h>

unsigned char i;
unsigned char j;
unsigned char a;
signed char b;

int main()
{
    printf("Please enter number of rows : ");
    scanf("%i", &a);
    for (i = 1; i <= a; i++)
    {
        b = a - i;
        for (j = 1; j < a; j++)
        {
            if (b > 0)
            {
                printf(" ");
                b--;
            }
            else if (b < 0 && i != a)
            {
                printf("  ");
            }
            else
            {
                printf(" *");
                b  = -1;
            }
        }
        printf(" *\n");
    }
}
