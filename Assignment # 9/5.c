#include <stdio.h>

int main()
{
    int n, sum = 0;
    int i = 1;
    printf("Enter a Number \n");
    scanf("%d", &n);
    do
    {
        sum = sum + i * i * i;
        i++;
    } while (i <= n);
    printf("%d", sum);
    return 0;
}