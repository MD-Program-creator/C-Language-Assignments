#include <stdio.h>
// find nth term of fibonacci series
int main()
{
    int a = 0, b = 1, res, n;
    printf("Enter Number \n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Result is %d", a);
    }
    else if (n == 2)
    {
        printf("Result is %d", a);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            res = a + b;
            a = b;
            b = res;
        }
        printf("%d", b);
    }
    return 0;
}