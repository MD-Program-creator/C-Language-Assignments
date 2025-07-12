#include <stdio.h>

int main()
{
    int s = 0, n;
    printf("Enter a Number \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s = s + 2 * i + 1;
    }
    printf("%d", s);
    return 0;
}