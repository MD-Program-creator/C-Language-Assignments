#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number \n");
    scanf("%d",&n);
    int i=n;
    do
    {
        if(i%2==0)
        {
            printf(" \n %d",i);
        }
        i--;
    } while (i>=1);
    
    return 0;
}