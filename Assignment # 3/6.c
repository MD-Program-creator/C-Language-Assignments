#include <stdio.h>

int main() {
    int a,b;
    printf("Enter Value of a =");
    scanf("%d",&a);
    printf("Enter Value of B =");
    scanf("%d",&b);
    printf("Value of A Before Swap is %d and Value of B Before Swap is %d \n ",a,b);
    a=a^b;
    b=a^b;
    a=a^b;  
    printf("Value of a after Swap  is %d and Value of b after Swap is is %d",a,b);
    return 0;
}

