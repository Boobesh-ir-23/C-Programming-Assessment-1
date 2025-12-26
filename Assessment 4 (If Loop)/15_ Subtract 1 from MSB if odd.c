#include<stdio.h>
int main ()
{
    int x,x1,y,z,n,m,sum;
    printf ("Enter your number: ");
    scanf ("%d", &x);

    x1 = x;

    if (x%2 == 0){
        printf ("The final output is: %d", x);
    } else {
        loop: if (x > 10){
            n = n + 1;
            x = x/10;
            m = m * 10;
            goto loop;
        } else {
            y = (x-1) * (m);
            z = x1% (m);
            sum = y + z;
            printf ("The final output is: %d", sum);
        }
    }
}