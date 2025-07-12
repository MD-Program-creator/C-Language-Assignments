#include <stdio.h>

int main()
{
    int L, num1, num2;
    printf("Enter Two Numbers \n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
        L = num1;
    else
        L = num2;
    while (1)
    {
        if (L % num1 == 0 && L % num2 == 0)
        {
            printf("Lcm of %d and %d is %d", num1, num2, L);
            break;
        }
        L++;
    }

    return 0;
}