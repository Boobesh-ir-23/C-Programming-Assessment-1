#include <stdio.h>

int main()
{
    int x,y,k,i,sum;
    
    i = 0;
    sum = 0;
    
    for (k = 1; k < 100000; k++){
        x = k;
        while (x > 0){
            y = x%10;
            sum = sum + y;
            x = x/10;
        }
        if (sum == 14){
            i = i + 1;
        }
        sum = 0;
    }
    printf ("%d", i);
    
}