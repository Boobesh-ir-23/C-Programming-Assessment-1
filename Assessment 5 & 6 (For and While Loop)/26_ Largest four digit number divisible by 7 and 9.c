#include <stdio.h>

int main()
{
    int x,j,k,l;
    l = 1000;
    
    for (k = 1000; k <= 9999; k++){
        if ((k%7 == 0) && (k%9 == 0)){
            j = k;
        }
        if (l < j){
            l = j;
        }
    }
    printf ("%d", j);
}