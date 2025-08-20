#include <stdio.h>

int main()
{
    int a = 0, b = 1, res, num;
    printf("Enter Number \n");
    scanf("%d", &num);
    if (num == 0)
        printf("Result is %d", a);
    else if (num == 1)
        printf("Result is %d", b);
    else
    {
        printf("%d%d", a, b);
        for (int i = 3; i <= num; i++)
        {
            res = a + b;
            printf("%d", res);
            a = b;
            b = res;
        }
    }

    return 0;
}