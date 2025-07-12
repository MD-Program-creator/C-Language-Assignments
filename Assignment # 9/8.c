#include <stdio.h>

int main()
{
    int a, c = 0;
    long int x;
    printf("enter a number \n");
    scanf("%d", &x);
    for (int i = 1; x != 0; i++)
    {
        a = x % 10;
        x = x / 10;
        c = c + 1;
    }
    printf("Number of digits in given Number is %d", c);
    return 0;
}