#include <stdio.h>
// prime Numbers under 100
int main()
{
    int i, j, x = 100;
    for (i = 2; i <= x; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
            printf("%d", i);
    }
    return 0;
}