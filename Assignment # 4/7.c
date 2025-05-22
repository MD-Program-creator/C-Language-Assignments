#include <stdio.h>

int main() {
   int x=147;
    printf("Enter 3 digit Number \n");
    scanf("%d",&x);
    printf("%d",(x%10)*100+(x/10));
    return 0;
}