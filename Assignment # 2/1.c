#include<stdio.h>
int main()
{
    int a,b,c,e,avg,sum;
    printf("Enter 1st Integer\t\t");
    scanf("%d",&a);
    printf("Enter 2nd Integer\t\t");
    scanf("%d",&b);
    printf("Enter 3rd Integer\t\t");
    scanf("%d",&c);
    printf("Enter 4th Integer\t\t");
    scanf("%d",&e);
    sum=a+b+c+e;
    avg=sum/4;
    printf("Average of 4 integers is\t\t%d\n", avg);
    printf("Sum of 4 integers is\t\t%d",sum);
    return 0;
}