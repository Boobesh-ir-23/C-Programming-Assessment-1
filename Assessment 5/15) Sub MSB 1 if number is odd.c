#include <stdio.h>

int main ()
{
    int x,x1,i,k,sum;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    x1 = x;
    sum = 1;
    i = 0;
    
    while (x > 0){
        i = i + 1;
        x = x/10;
    }

    if ((x1%10)%2 == 0){
        printf ("%d", x1);
    }else{
        for (k = 1; k < i; k++){
            sum = sum * 10;
        }
        x1 = x1 - sum;
        printf ("%d", x1);
        }
    }
   
    