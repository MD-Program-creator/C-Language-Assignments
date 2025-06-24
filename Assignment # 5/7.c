#include <stdio.h>

int main() {
    int a,b,c,dis;
    
    printf("Enter Condition \"a xsqr + bx +c\" \n");
    scanf("%d + %d +%d",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    {
        printf("Number is real & Distint %d",dis);
    }
    else if (dis==0)
    {
        printf("Number is real & Equal %d",dis);
    }

    else if (dis<0)
    {
        printf("Number is Imaginary %d",dis);
    }
    else
    {
        printf("Invalid Option");
    }
    
    
    return 0;
}