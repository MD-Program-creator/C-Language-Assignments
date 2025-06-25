#include <stdio.h>

int main() {
    int Sp,Cp,profit;
    printf("Enter Cost Price \n");
    scanf("%d",&Cp);
     printf("Enter Selling Price \n");
    scanf("%d",&Sp);
    profit=Sp-Cp;
    printf("Profit is = %d",profit);
    return 0;
}