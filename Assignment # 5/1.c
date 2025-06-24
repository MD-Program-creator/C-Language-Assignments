#include <stdio.h>

int main() {
    int x;
    printf("Enter a Number \n");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is non positive");
    }
    return 0;
}