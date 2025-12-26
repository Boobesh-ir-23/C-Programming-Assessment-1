#include <stdio.h>

int main()
{
    int x,y,i,k;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    y = x%100;
    i = 0;
    
    for (k = 1; k <= y; k++){
        if (y%k == 0){
            i = i + 1;
        }
    }
    if (i == 2){
        printf ("prime");
    } else{
        printf ("Not prime");
    }
}