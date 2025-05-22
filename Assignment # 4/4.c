#include <stdio.h>

int main() {
    int x,y,d;
    printf("Enter Value of x \n");
    scanf("%d",&x);
    int s=71499;
    d=(s/10)*10;
    y=(x/10)*10;
    printf("Value of original X is %d \n",x);
    printf("Modified Value of X is %d \n",y); 
    printf("Value of SD is %d",d);
    return 0;
}