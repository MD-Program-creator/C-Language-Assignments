#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two integers\n");
    scanf("%d %d",&a,&b);
    printf("Value of A is %d and Value of B is % d \n ",a,b);
    a=a-b-(b=a);
     printf("Value of A is %d and Value of B  is %d \n ",a,b);
    return 0;
}