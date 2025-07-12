#include <stdio.h>

int main()
{
    int fac = 1, n, i;
    printf("Enter a Number \n");
    scanf("%d", &n);
    if (n == 0 || n < 1)
    {
        n = 1;
        printf("%d \n", n);
        printf("Number Enter by the user is 0  ");
        return 0;
    }
    for (i = n; i >= 1; i--)
    {
        fac = fac * i;
    }
    printf("Factorial of %d is = %d", n, fac);
    return 0;
}