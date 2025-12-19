#include <stdio.h>

int main()
{
    int x,y,j;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    j = 0;
    
    while (x > 0){
        y = x%100;
        if (y == 16 || y == 25 || y ==36 || y == 49 || y== 64 || y == 81){
            j = j + 1;
        }
        x = x/100;
    }
    printf ("%d", j);
}