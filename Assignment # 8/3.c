#include <stdio.h>

int main() {
    int n;
    printf("Enter Number \n");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        printf("\n %d",i);
    }
    return 0;
}