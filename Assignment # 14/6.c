#include <stdio.h>
int factorial(int);
int main()
{
    int n, r;
    printf("Enter Number \n");
    scanf("%d", &n);
    r = factorial(n);
    printf("%d", r);
    return 0;
}

int factorial(int x)
{
    int f = 1;
    for (int i = x; i >= 1; i--)
        f = f * i;
    return f;
}