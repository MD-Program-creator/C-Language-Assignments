#include <stdio.h>

int NChecker(int);
int main()
{
    int n, r;
    printf("Enter Number \n");
    scanf("%d", &n);
    r = NChecker(n);
    (r == 1) ? printf("Even Number") : printf("Odd Number");
    return 0;
}
int NChecker(int x)
{
    return (x % 2 == 0) ? 1 : 0;
}