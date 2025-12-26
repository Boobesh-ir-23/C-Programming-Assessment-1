#include<stdio.h>
int main()
{
    int x,sum;
    sum = 0;
    x = 6;
    loop: if (x > 0) {
        sum = sum + x;
        x = x - 1;
        goto loop;
    }
    printf ("The sum is: %d", sum);
}