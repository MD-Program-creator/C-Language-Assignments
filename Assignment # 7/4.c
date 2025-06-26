#include <stdio.h>

int main() {
    int n;
    printf("Enter How Many natural Numbers Print \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("\n This Number is odd %d",i);
        }
    }
    return 0;
}