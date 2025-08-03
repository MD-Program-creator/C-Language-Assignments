#include <stdio.h>
int Combination(int, int);
int main()
{
    int x, y, res;
    printf("Enter total Number and Selected \n");
    scanf("%d %d", &x, &y);
    res = Combination(x, y);
    printf("Result is %d", res);
    return 0;
}

int Combination(int n, int r)
{
    int c, no = 1, ro = 1, s = 1;
    for (int i = n; i >= 1; i--)
    {
        no = no * i;
    }
    for (int j = r; j >= 1; j--)
    {
        ro = ro * j;
    }
    for (int k = 1; k <= n - r; k++)
    {

        s = s * k;
    }
    c = no / (ro * s);
    return c;
}