#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, j, i;
    printf("Enter Number\n");
    scanf("%d", &n);
    for (i = 2; true; i++)
    {
        n = n + 1;
        for (j = 2; true; j++)
        {
            if (n % j == 0)
                break;
        }
        if (j == n)
        {
            printf("Next Prime Number is %d", n);
            break;
        }
    }
    return 0;
}