#include <stdio.h>

int main() {
    char num;
    printf("Enter Character \n");
    scanf("%c",&num);
    if(num>=97 && num<=122)
    printf("Alphabetic is Lowercase");
    else if(num>=65 && num<=90)
     printf("Alphabetic is UpperCase");
    return 0;
}