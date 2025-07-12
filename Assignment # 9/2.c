
/*
#include <stdio.h>  // this is my logic and this is wrong I am writting this code sum of even natural number

int main()
{
    int i = 1;
    int x, sum = 0;
    printf("Enter Number \n");
    scanf("%d", &x);
    do
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    } while (i <= x);
    printf("Sum of Even Natural Numbers is %d", sum);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("Enter a number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + i * 2;
    }
    printf("%d", s);
    return 0;
}