#include <stdio.h>

int main()
{
    int x = 1;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 5; j >= i + 1; j--)
        {
            printf("%d", x);
            x = x + 1;
        }
        printf("\n");
    }

    return 0;
}