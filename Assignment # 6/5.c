#include <stdio.h>

int main() {
    int n;
    printf("Enter Number \n");
    scanf("%d",&n);
    if(n%2==0 && n%3==0 )
    printf("Divisible by 2 or 3");
    else if(n%2==0)
    printf("Divisible by 2");
    else if(n%3==0)
    printf("Divisible by 3");
    else
    printf("Not Divisible by 2 or  3");
    return 0;
}