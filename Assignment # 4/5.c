#include <stdio.h>

int main() {
    int x , y , r;
    printf("Enter Number \n");
    scanf("%d",&x);
    printf("Enter a Digit \n");
    scanf("%d",&y);
    printf("Value of X is %d and Value of Y is %d \n",x,y);
    r=(x/10)*10+y;
    printf("Result is %d",r);
    return 0;
}