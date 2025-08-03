#include <stdio.h>

int main()
{
    int n, i = 2;
    printf("Enter Number \n");
    scanf("%d", &n);
    while (n > 1)
    {
        while (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
        }
        i++;
    }

    return 0;
}