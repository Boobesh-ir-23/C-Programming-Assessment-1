#include<stdio.h>
int main()
{
    int x,y,z,sum;
    y = 0;
    sum = 0;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    loop: if (x > 10){
        y = y + 1;
        z = x%10;
        x = x/10;
        sum = sum + z;
        goto loop;
    } else{
        y = y + 1;
        sum = sum + x;
        printf ("%d", sum);
    }
}