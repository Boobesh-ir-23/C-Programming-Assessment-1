#include <stdio.h>

int main() {
    
    int i,x,y;
    x = 0;
    
    for (i = 11; i < 100; i++){
        y = i%10;
        if (y == 5){
            x = x + i;
        }
    }
    printf ("%d", x);
}