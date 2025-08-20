#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter the Radius =");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Radious is equal to  %d and the area of circle is equal to %f",r,area);
    return 0;
}