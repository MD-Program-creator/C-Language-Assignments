#include<stdio.h>
int main()
{
    int p,r,t;
    double s;
    printf("Enter Principal Amount :");
    scanf("%d",&p);
    printf("Enter of intrest in (\"%%\")");
    scanf("%d",&r);
    printf("Enter Time in Year");
    scanf("%d",&t);
    s=p*r*t/100.0;
    printf("Simple intrest is equal to %f\n ",s );
    printf("Principal Amount is %d and rate of intrest is %d and total time is %d " ,p,r,t);
    return 0;
}