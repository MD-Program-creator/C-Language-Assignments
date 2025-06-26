#include <stdio.h>

int main() {
    int n;
    printf("Enter How Many odd Natural Numbers Print \n");
    scanf("%d",&n);
    for(int i=n;i>=1; i--)
    {
        if(i%2!=0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}