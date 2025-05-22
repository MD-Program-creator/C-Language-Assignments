#include <stdio.h>

int main() {
    int x,sum;
    printf("Enter 3 Digit Number \n");
    scanf("%d",&x);
    printf("%d\n",x%10);
    printf("%d\n",x/10%10);   
    printf("%d\n",x/100);
    sum=x/100+x/10%10+x%10;
    printf("%d",sum);
    return 0;
}