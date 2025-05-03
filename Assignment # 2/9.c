#include <stdio.h>

int main() {
    int quan; //
    float Sp,Cp;
    double profit ,cos,sell;
    printf("Enter Cost price per dozen \n");
    scanf("%f",&Cp);
    printf("Enter Selling price per dozen\n");
    scanf("%f",&Sp);
    printf("Enter quantity of Bananas\n");
    scanf("%d",&quan);
    cos=Cp/12*quan;
    printf("Cost of %d bananas is %f\n ",quan,cos);
    sell=Sp/12*quan;
    printf("Selling is %f\n",sell);
    profit=sell-cos;
    printf("Profit is %f \n",profit);
    return 0;
}