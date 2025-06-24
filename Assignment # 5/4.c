#include <stdio.h>

int main() {
    int x;
    printf("Enter a Number \n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}