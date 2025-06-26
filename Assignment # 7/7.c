#include <stdio.h>

int main() {
    int i=10;
    do
    {
        if(i%2==0)
        {
            printf(" \n %d",i);
        }
        i--;
    } while (i>=1);
    return 0;
}