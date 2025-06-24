#include <stdio.h>

int main() {
    int dividend, divisor;
    float res;
    printf("Enter Divinder= ");
    scanf("%d",&dividend);
    printf("Enter Divisor\n");
    scanf("%d",&divisor);
    res=divisor%dividend;
    if(res==0)
    {
        printf("Number is Divisiber");
    }
    else
    {
        printf("Number is not Divisiber");
    }

    return 0;
}