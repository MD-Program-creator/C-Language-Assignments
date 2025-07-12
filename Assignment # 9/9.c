#include <stdio.h>

int main()
{
    int num, a, b = 0;
    printf("Enter a Number \n");
    scanf("%d", &num);
    for (int i = 1; num != 0; i++)
    {
        a = num % 10;
        b = b * 10 + a;
        num = num / 10;
    }
    printf("Reverse of number is %d ", b);
    return 0;
}