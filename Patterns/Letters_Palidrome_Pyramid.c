#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int r;
    unsigned char ch;
    printf("Please enter number of rows : ");
    scanf("%i", &r);
    while (r > 26)
    {
        printf("Invalid input! Try again : ");
        scanf("%i", &r);
    }
    for (i = 1; i <= r; i++)
    {
        ch = 'A';
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%c ", ch);
            if (j < i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        printf("\n");
    }
}


