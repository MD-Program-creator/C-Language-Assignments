#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, c, res, digit;
    for (int n = 1; n <= 1000; n++)
    {
        c = 0;
        temp = n;
        while (temp != 0)
        {
            temp = temp / 10;
            c = c + 1;
        }
        temp = n;
        res = 0;
        while (temp != 0)
        {
            digit = temp % 10;
            res = res + pow(digit, c);
            temp = temp / 10;
        }
        if (res == n)
            printf("%d ", n);
    }
    return 0;
}