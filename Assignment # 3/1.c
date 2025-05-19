#include <stdio.h>

int main() {
    char ch;
    int x;
    printf("Enter Any Character ");
    scanf("%c",&ch);
    printf("Character is equal to %c \n",ch);
    x=sizeof(ch);
    printf("Size of character is %d \n",x);
    x=sizeof(x);
    printf("Size of x is %d \n",x);
    x=sizeof(int);
    printf("Size of integer is %d",x);
    return 0;
}