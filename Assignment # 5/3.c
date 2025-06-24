/*#include <stdio.h>

int main() {
    int x;
    int bit;
    printf("Enter a Number \n");
    scanf("%d",&x);
    bit=x&1;
    printf("Given Number is %d and last bit of this number is %d ",x,bit);
    return 0;
}*/


#include <stdio.h>

int main() {
    int num,bit,res;
    printf("Enter a Number \n");
    scanf("%d",&num);
    bit=num & 1;
    if(bit==0)
    {
        printf("Given Number is Even ");
    }
    else
    {
        printf("Given Number is Odd");
    }
    printf("\n");
    printf("Result of bit is %d",bit);
    return 0;
}