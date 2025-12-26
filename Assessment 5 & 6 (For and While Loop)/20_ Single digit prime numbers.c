#include <stdio.h>

int main()
{
    int i,j,k,m;
    
    k = 0;
    m = 0;
    
    for (i = 1; i < 10; i++){
        for (j = 1; j < 10; j++){
            if (i%j == 0){
                k = k + 1;
            }
        }
        if (k == 2){
            m = m + 1;
        }
        k = 0;
    }
    printf ("%d", m);
}