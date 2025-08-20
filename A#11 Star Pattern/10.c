#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 2 || i == 3 || i == 4)
            {
                if (j == 1 || j == 5)
                    printf("*");
                else if (j == 2 || j == 3 || j == 4)
                    printf(" ");
            }
            else if (j == 1 || j == 5)
            {
                printf("*");
            }

            else if (i == 1 || i == 5)
                printf("*");
        }
        printf("\n");
    }

    return 0;
}