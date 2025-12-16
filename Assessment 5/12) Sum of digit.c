#include <stdio.h>

int main ()
{
    int x,y,sum;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    sum = 0;
    
    while (x > 0){
        y = x%10;
        x = x/10;
        sum = sum + y;
    }
    printf ("%d", sum);
}