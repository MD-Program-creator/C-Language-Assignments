#include <stdio.h>

int main() {
    int i=1;
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    do
    {
        printf("\n %d * %d *%d = %d",i,i,i,i*i*i);
        i++;
    } while (i<=n);
    
    return 0;
}