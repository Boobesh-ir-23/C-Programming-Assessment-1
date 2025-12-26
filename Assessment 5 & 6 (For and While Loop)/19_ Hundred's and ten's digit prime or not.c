#include<stdio.h>

int main ()
{
    int x,y,z,k,i;
    printf ("Enter your four digit number: ");
    scanf ("%d", &x);
    
    i = 0;
    
    y = x/10;
    z = y%100;
    
    for (k = 1; k <=z; k++){
        if (z%k == 0){
            i = i + 1;
        }
    }
    if (i == 2){
        printf ("Prime");
    } else {
        printf ("Not a Prime");
    }
}