#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, c = 0, res = 0, digit;
    printf("Enter Number \n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        c = c + 1;
    }
    printf("Digits is %d", c);
    printf("\n");
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        res = res + pow(digit, c);
        temp = temp / 10;
    }
    if (res == n)
        printf("Number is Armstrong");
    else
        printf("Number is Not Armstrong");

    return 0;
}