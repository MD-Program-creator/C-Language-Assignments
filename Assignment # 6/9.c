#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter Three Side of triangle \n");
    scanf("%d%d%d",&a,&b,&c);
    if( (a+b)>c && (a+c)>a && (a+c)>b )
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Not Valid Triangle");
    }
    return 0;
}