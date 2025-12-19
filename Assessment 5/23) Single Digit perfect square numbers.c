#include <stdio.h>

int main()
{
    int x,y,j;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    j = 0;
    
    while (x > 0){
        y = x%10;
        if (y == 1 || y == 4 || y == 9){
            j = j + 1;
        }
        x = x/10;
    }
    printf ("%d", j);
}