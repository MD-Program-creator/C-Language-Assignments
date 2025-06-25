
/*
#include <stdio.h>
#include<math.h>
int main() {
    int num,digit;
    printf("Enter a Number =\t");
    scanf("%d",&num);
    digit=log10(num)+1;
    if(digit==3)
    {
        printf("Number is Three Digits \n");
    }
    else if(num==0)
    {
        digit=1;
    }
    else   
    {
        printf("Number is not three Digits \n");
    }

    printf("Digit is Equal to %d ",digit);
    return 0;
}
*/

#include <stdio.h>

int main() {
    int x;
    printf("Enter a Number \n");
    scanf("%d",&x);
    if(x>=100 && x<=999)
    printf("Three Digit Number");
    else
     printf("Not Three Digit Number");
    return 0;
}