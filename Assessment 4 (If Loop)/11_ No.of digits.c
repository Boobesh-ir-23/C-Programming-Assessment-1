#include<stdio.h>
int main()
{
    int x,y;
    y = 0;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    loop: if (x > 10){
        y = y + 1;
        x = x/10;
        goto loop;
    } else{
        y = y + 1;
        printf ("%d", y);
    }
}