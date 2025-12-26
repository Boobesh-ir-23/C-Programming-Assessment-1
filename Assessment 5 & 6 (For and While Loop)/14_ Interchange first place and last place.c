#include <stdio.h>

int main ()
{
    int x,y,i,x1,sum;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    i = 0;
    x1 = x;
    sum = 0;
    
    while (x > 0){
        x = x/10;
        i = i + 1;
    }
    
    while (x1 > 0){
        y = x1%10;
        sum = (sum*10) + y;
        x1 = x1/10;
    }
    printf ("%d",sum);
}