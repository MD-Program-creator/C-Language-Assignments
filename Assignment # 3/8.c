#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter two Integers \n");
    scanf("%d,%d",&a,&b);
    printf("Value of A is %d and Value of B is %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value of A is %d and the value of B is %d " ,a,b);
    return 0;
}