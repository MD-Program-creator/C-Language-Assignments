 #include <stdio.h>

int main() {
    int i=1;
    int x=10;
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf(" \n %d * %d = %d",x,i,x*i);
        i++;
    }
    return 0;
}