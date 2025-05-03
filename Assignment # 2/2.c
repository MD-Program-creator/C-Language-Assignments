#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter time in given Format \"HH : MM\"");
    scanf("%d%d",&h,&m);
    //scanf("%d",&m);
    //printf("\n");
    printf("%d Hour and %d Minute \n",h,m);
    printf("%d : %d PM",h,m);
    return 0;
}