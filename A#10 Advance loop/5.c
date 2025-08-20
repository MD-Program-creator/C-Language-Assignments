#include <stdio.h>

int main()
{
    int n1, n2, h, gcd;
    printf("Enter Number 1 and Number 2 \n");
    scanf("%d%d", &n1, &n2);
    h = (n1 > n2) ? n1 : n2;
    for (h = (n1 > n2) ? n1 : n2; h >= 1; h--)
    {
        if (n1 % h == 0 && n2 % h == 0)
        {
            gcd = h;
            break;
        }
    }
    if (gcd == 1)
        printf("Numbers is co-prime");
    else
        printf("Numbers is Not co-prime");
    return 0;
}