#include<stdio.h>
int main()
{
    int x,x1,y,sum,l,f,z,m,n;
    sum = 0;

    printf ("Enter the number to be reversed: ");
    scanf ("%d", &x);

    l = x%10;
    y = 0;
    z = 0;
    n = 1;
    sum = 0;
    x1 = x/10;

    loop: if (x > 10){
        y = y + 1;
        z = z + 1;
        x = x/10;
        goto loop;
    } else {
        f = x;
    }
    loop1: if (y > 0){
        l = l * 10;
        y = y - 1;
        goto loop1;
    }
    loop2: if (z > 1){
        n = n * 10;
        z = z - 1;
        goto loop2;
    } else {
        m = x1%n;
        sum = l + (m*10) + f;
        printf ("%d", sum);
    }
}
