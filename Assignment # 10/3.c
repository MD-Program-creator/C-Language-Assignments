#include <stdio.h>

int main()
{
    int a = 0, b = 1, num, res = 0;
    printf("Enter Number \n");
    scanf("%d", &num);
    if (num == 0 || num == 1)
    {
        printf(" exist ");
        return 0;
    }

    while (res < num)
    {
        res = a + b;
        a = b;
        b = res;
    }
    if (res == num)
        printf("Exist");
    else
        printf("Not Exist");
    return 0;
}