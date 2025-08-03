#include <stdio.h>

void print(int);
int main()
{
    int n;
    printf("Enter Number \n");
    scanf("%d", &n);
    print(n);
    return 0;
}

void print(int x)
{
    for (int i = 1; i <= x; i++)
        printf(" \n %d ", i);
}
