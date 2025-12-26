#include <stdio.h>

int main()
{
    int x,i,j;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    j = 0;
    
    for (i = 1; i <= x; i++){
        if (x%i == 0){
            j = j + 1;
        }
    }
    if (j == 2){
        printf ("Prime");
    }else{
        printf ("Not a Prime");
    }
}
   
    