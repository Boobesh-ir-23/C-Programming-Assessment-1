#include <stdio.h>

int main() {
    
    int i,sum;
    sum = 0;
    
    for (i = 6; i > 0; i--){
        sum = sum + i;
    }
    
    printf ("%d", sum);
  
}