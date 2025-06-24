/*#include <stdio.h>

int main() {
    int year;
    printf("Enter Year \n");
    scanf("%d",&year);
    if ( (year%4==0&&year%100!=0) || (year%400==0) )
    {
        printf("Given year is leap Year");
    }
    /*else if (year%4==0 && year%100==0 && year%400==0)
    {
        printf("Given Year is Leap Year");
    }*/
    /*else{
        printf("Given Year is not a Leap Year");
    }
    
    return 0;
}*/




//my sirr g Method 
#include <stdio.h>

int main() {
    int year;
    printf("Enter Year \n");
    scanf("%d",&year);
    if(year%100==0)
    {
        // Century year
        if(year%400==0)
        printf("Leap Century");
        else
        printf("non Leap century");
    }
    else
    {
        //non Century Year
        if(year%4==0)
        printf("Leap year");
        else
        printf("Non Leap year");
    }
    return 0;
}