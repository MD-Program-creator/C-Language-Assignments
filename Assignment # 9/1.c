#include <stdio.h>

int main() {
    int sum=0;
    int x;
    printf("Enter Number \n");
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        sum=sum+i;
    }
     printf("%d",sum);
    return 0;
}