#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {

        for (int s = 1; s <= i - 1; s++)
        {
            printf(" ");
        }
        for (int j = 5; j > i - 1; j--)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}