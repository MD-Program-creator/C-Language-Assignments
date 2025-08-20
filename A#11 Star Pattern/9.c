#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int x = 'A';
        x = x + i;
        for (int s = i; s > 0; s--)
        {
            printf(" ");
        }
        for (int j = i; j < 5; j++)
        {
            printf("%c", x);
            x = x + 1;
        }
        printf("\n");
    }

    return 0;
}