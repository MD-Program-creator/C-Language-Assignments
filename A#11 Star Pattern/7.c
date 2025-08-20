#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int ch = 65;
        for (int s = i; s > 1; s--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 6 - i; j++)
        {
            printf("%c", ch);
            ch = ch + 1;
        }
        printf("\n");
    }

    return 0;
}
