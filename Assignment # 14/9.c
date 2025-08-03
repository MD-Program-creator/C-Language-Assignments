#include <stdio.h>

int checking(int, int);

int main()
{
    int digit, number, res;
    printf("Enter Number \n");
    scanf("%d", &number);
    printf("Enter Digit \n");
    scanf("%d", &digit);
    res = checking(number, digit);
    if (res == 1)
        printf("yes digit exist");
    else
        printf(" digit Not exist");

    return 0;
}
int checking(int number, int digit)
{
    int s;
    while (number != 0)
    {
        s = number % 10;
        number = number / 10;
        if (s == digit)
            return 1;
    }
    return 0;
}