#include <stdio.h>

int main() {
    int x;
    int i=1;
    printf("Enter How Many time you print Natural number \n");
    scanf("%d",&x);
    do{
        printf(" \n %d",i);
        i++;
    }while(i<=x);
    return 0;
}