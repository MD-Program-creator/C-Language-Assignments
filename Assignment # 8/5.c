#include <stdio.h>

int main() {
    int n;
    printf("Enter Number \n");
    scanf("%d",&n);
    for(int i=1;i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("\n %d",i);
        }
    }

    return 0;
}