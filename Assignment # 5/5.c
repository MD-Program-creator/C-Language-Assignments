#include <stdio.h>
#include<math.h>
int main() {
    int num,digit;
    printf("Enter a Number \n");
    scanf("%d",&num);
    if(num==0)
    {
        digit=1;
    }
    else {

        digit=(log10(num)+1);
    }
    //printf("Number is %d and Digits is %d \n",num,digit);

    if(digit==3)
    {
        printf("Given Number is three Digit");
    }

    else if (num==0)
    {
        printf("Digit is %d and Number is %d ",digit,num);
    }
    else
    {
        printf("Given Number is Not a Three Digit Number ");
    }
    return 0;
}




//Method Number 2 How to find a Digit 

/*#include <stdio.h>

int main() {
    int x;
    printf("Enter a Number ");
    scanf("%d",&x);
    if(x>=100&&x<=999)
    printf("Three Digit Number");
    else
    printf("Not a three Digit Number");
    return 0;
}*/