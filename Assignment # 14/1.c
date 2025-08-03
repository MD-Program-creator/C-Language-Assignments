#include <stdio.h>
float AreaofCircle(int);

int main()
{
    int x;
    float res;
    printf("Enter Radius of Circle \n");
    scanf("%d", &x);
    res = AreaofCircle(x);
    printf("Area of Circle is %f", res);
    return 0;
}

float AreaofCircle(int r)
{
    float a;
    a = r * r * 3.1416;
    return a;
}