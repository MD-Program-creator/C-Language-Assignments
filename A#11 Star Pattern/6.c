#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int x = i;
        for (int j = 5; j <= 4 + i; j++)
        {
            printf("%d", x);
            x = x - 1;
        }

        printf("\n");
    }

    return 0;
}