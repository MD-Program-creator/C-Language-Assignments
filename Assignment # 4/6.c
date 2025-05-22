#include <stdio.h>

int main() {
    float CRate=85.99;
    float USD , INR;
    printf("Enter Amount in INR\n");
    scanf("%f",&INR);
    USD=INR/CRate;
    printf("Convert INR into USD %f",USD);
    return 0;
}