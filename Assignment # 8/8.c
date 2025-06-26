#include <stdio.h>

int main() {
    int n;
    printf("Enter Number \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf(" \n %d*%d=%d ",i,i,i*i);
    }
    return 0;
}