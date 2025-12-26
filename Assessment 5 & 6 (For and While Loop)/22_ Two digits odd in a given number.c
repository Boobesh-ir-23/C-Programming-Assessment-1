#include <stdio.h>

int main()
{
    int x,y;
    int count;
    count = 0;
    
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    while (x > 9){
        y = x%100;
        x = x/10;
        if (y%2 != 0){
            count++;
        }
    }
    printf ("%d", count);
}