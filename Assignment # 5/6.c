#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number 1 \n");
    scanf("%d",&x);
    printf("Enter Number 2 \n");
    scanf("%d",&y);
    if(x>y)
    {
        printf("%d",x);
    }
    else if (x==y)
    {
        printf("%d",y);
    }
    else{
        printf("%d",y);
    }
    return 0;
}