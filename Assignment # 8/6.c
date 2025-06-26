#include <stdio.h>

int main() {
    int i=1;
    int n;
    printf("Enter Number \n");
    scanf("%d",&n);
    do
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
        i++;
    } while (i<=n);
    
    return 0;
}