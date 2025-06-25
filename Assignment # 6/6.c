#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number \n");
    scanf("%d",&n);
    if(n%3==0 && n%7==0)
    printf("Divisible by 3 or 7");
    else if(n%3==0)
    printf("Divisible by 3 ");
    else if(n%7==0)
    printf("Divisible by  7");
    else
     printf("Not Divisible by 3 or 7");
    return 0;
}
