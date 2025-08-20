#include <stdio.h>

int main()
{
    int i, j = 30, x;
    for (i = 10; i <= j; i++)
    {
        for (x = 2; x < j; x++)
        {
            if (i % x == 0)
                break;
        }
        if (x == i)
            printf("%d", i);
    }
    printf("");
    return 0;
}