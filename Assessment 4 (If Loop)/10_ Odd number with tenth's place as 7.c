#include<stdio.h>
int main()
{
    int x,y;
    x = 11;
    
    loop: if (x < 100){
        y = x/10;
        if (y == 7){
            printf ("\n %d", x);
            x = x + 2;
            goto loop;
        } else{
            x = x + 2;
            goto loop;
        }
    }
}