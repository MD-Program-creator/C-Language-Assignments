#include<stdio.h>
int main()
{
    int a , l , w;
    printf("Enter the lenght of Area ");
    scanf("%d",&l);
    printf("Enter the Width of Area");
    scanf("%d" ,&w);
    a=l*w;
    printf("Lenght of Area is %d and width is %d\n " , l , w );
    printf("Area of Rectangle is = %d",a);
    return 0;
}