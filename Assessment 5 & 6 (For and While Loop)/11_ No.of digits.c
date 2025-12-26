#include <stdio.h>

int main() {
    
    int i,x,y;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    i = 0;
    
    while (x >= 0){
        i = i + 1;
        x = x/10;
    }
    printf ("%d", i);
}