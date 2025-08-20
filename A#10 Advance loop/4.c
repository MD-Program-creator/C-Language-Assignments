#include <stdio.h>

int main()
{
    int h, n1, n2, gcd;
    printf("Enter Number 1 and Number 2");
    scanf("%d%d", &n1, &n2);
    for (h = (n1 > n2) ? n1 : n2; h > 1; h--)
    {
        if (n1 % h == 0 && n2 % h == 0)
        {
            gcd = h;
            break;
        }
    }
    printf("HCF of Two Numbers  %d and %d is : %d ", n1, n2, gcd);
    return 0;
}