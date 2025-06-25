#include <stdio.h>

int main() {
    char ch;
    printf("Enter Character \n");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    {
        printf("Character is Lowercase");
    }
    else if(ch>='A'&& ch<='Z')
    {
       printf("Character is Uppercase");
    }
    else if(ch>='0'&& ch<='9')
    {
       printf("Character is digit ");
    }
    else
    printf("Character is Special Character");
    return 0;
}