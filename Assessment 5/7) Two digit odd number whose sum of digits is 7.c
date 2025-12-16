#include <stdio.h>

int main() {
    
    int i,x,y;
    
    for (i = 11; i < 100; i++){
        y = i/10;
        x = i%10;
        
        if ((x+y) == 7){
            if (i%2 == 1){
                printf ("\n %d", i);
            }
        }
    }
}