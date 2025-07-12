#include <stdio.h>

int main()
{
    int x, isprime = 1;
    printf("Enter Number \n");
    scanf("%d", &x);
    if (x <= 1)
    {
        printf("Number is Not a Prime");
        return 0;
    }
    for (int i = 2; i < x - 1; i++)
    {
        if (x % i == 0) // user enter 5 so i divide numbers between 2 to 4 if each number is divided by the number 2 to 4 its means number is not prime
        {
            isprime = 0; // given number 5 (range 2 to 4) i successfully divided and isprime varaible assign value 0
            break;
        }
    }
    if (isprime == 0)
        printf("Not a Prime Number");
    else
        printf("Prime Number ");
    return 0;
}