#include <stdio.h>

int main()
{
    int x,y,k,i,j;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    y = 0;
    i = 0;
    j = 0;
    
    while (x > 0){
        y = x%10;
        for (k = 1; k <= y; k++){
            if (y%k == 0){
                i = i + 1;
            }
        }
        if (i == 2){
            j = j + 1;
        }
        x = x/10;
        y = 0;
        i = 0;
    }
    printf ("%d", j);
}