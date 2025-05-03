#include <stdio.h>

int main() {
    int day,mon,year;
    printf("Enter Date is given format \"DD/MM/YYYY\"");
    printf("Enter Day\n");
    scanf("%d",&day);
    printf("Enter Month\n");
    scanf("%d",&mon);
    printf("Enter Year\n");
    
    scanf("%d",&year);
    printf("Day_%d , Month_%d , Year_%d",day,mon,year);
    return 0;
}