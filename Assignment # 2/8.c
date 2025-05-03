#include <stdio.h>

int main() {
    int l,w,h,vol;
    printf("Enter Lenght of vlume \n");
    scanf("%d",&l);
    printf("Enter Width of lenght \n");
    scanf("%d",&w);
    printf("Enter the height of lenght \n");
    scanf("%d",&h);
    vol=l*w*h;
    printf("Volume of cuboid is %d",vol);
    return 0;
}