#include <stdio.h>

int main() {
    
    int i,x,y;
    x = 0;
    
    for (i = 11; i < 100; i++){
        y = i/10;
        if (y == 7){
            if (i%2 ==1){
                x = x + i;
            }
        }
    }
    printf ("%d", x);
}