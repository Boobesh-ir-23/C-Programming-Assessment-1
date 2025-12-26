#include<stdio.h>
int main()
{
    int x,x1,y,f;
    printf ("Enter the number: ");
    scanf ("%d", &x);

    x1 = x;

    loop: if (x > 0){
        f = x1%x;
        x = x - 1;
        if (f == 0){
            y = y + 1;
        }
        goto
    }
    if (y == 2){
        printf ("The given number is prime");
    } else {
        printf ("The given number is not prime");
    }
}