#include <stdio.h>

float Simpleintrest(float, float, float);
int main()
{
    float pr, rate, time, res;
    printf("Enter Orignal Amount\n");
    scanf("%f", &pr);
    printf("Enter total Intrest Rate\n");
    scanf("%f", &rate);
    printf("Enter Time \n");
    scanf("%f", &time);
    res = Simpleintrest(pr, rate, time);
    printf("Total Interest After time & interest rate is %f", res);
    return 0;
}

float Simpleintrest(float P, float r, float t)
{
    float SI;
    SI = P * r * t / 100;
    return SI;
}