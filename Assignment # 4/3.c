#include <stdio.h>

int main() {
    int x;
    x=sizeof(int);
    printf("Size of integer is %d \n " ,x);
    x=sizeof(float);
    printf("Size of Float is %d \n " ,x);
    x=sizeof(char);
    printf("Size of Character  is %d \n " ,x);
    x=sizeof(double);
    printf("Size of Double  is %d \n " ,x);
    return 0;
}