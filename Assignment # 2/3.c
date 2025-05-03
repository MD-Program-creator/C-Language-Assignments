#include<stdio.h>
int main()
{
    int r;
    double c;
    printf("Enter radius ");
    scanf("%d",&r);
    c=2*3.14*r;
    printf("circumference of circle is %f and user enter radius %d",c,r);
    return 0;
}