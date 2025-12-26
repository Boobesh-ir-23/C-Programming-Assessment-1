#include <stdio.h>

int main()
{
    int x,y;
    int k,i;
    
    printf ("Enter your first number: ");
    scanf ("%d", &x);
    
    printf ("Enter your second number: ");
    scanf ("%d", &y);
    
    k = 0;
    i = 0;
    
    while (k == 0){
        i = x%y;
        if (i == 0){
            printf ("The HCF is: %d", y);
            k = 1;
        } else {
            x = y;
            y = i;
            i = 0;
        }
    }
}