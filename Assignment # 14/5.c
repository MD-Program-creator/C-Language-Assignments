#include <stdio.h>

void check_odd_N(int n);

int main()
{
    int n;
    printf("Enter Number \n");
    scanf("%d", &n);
    check_odd_N(n);
    return 0;
}

void check_odd_N(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", 2 * i - 1);
    }
}