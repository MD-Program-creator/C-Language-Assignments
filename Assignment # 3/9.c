#include <stdio.h>

int main() {
    int a,b;
    printf("Enter Value of A and B ");
    scanf("%d %d",&a,&b);
    printf("Value of A Before Swap is %d and Value of B Before Swap is %d \n ",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
     printf("Value of A is %d and Value of B  is %d \n ",a,b);
    return 0;
}