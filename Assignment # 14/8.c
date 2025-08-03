#include <stdio.h>

float permutation(int, int);
int main()
{
    int x, y;
    float res;
    printf("Enter 2 Numbers\n");
    scanf("%d %d", &x, &y);
    res = permutation(x, y);
    printf("Result is %f", res);
    return 0;
}

float permutation(int n, int r)
{
    int per, no = 1, ro = 1;
    for (int i = n; i >= 1; i--)
    {
        int s = 1;
        no = no * i;
    }
    for (int k = n - r; k >= 1; k--)
    {
        ro = ro * k;
    }
    per = no / ro;
    return per;
}