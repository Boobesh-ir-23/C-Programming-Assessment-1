#include <stdio.h>

int main()
{
    int x,y,k,i,l,x1,y1;
    printf ("Enter the first number: ");
    scanf ("%d", &x);
    printf ("Enter the second number: ");
    scanf ("%d", &y);
    
    k = 0;
    x1 = x;
    y1 = y;
    
    while (k == 0){
        i = x%y;
        if (i == 0){
            l = ((x1 * y1)/y);
            printf ("The LCM is: %d", l);
            k = 1;
        }else{
            x = y;
            y = i;
            i = 0;
        }
    }
    
}