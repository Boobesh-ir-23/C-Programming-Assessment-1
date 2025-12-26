#include<stdio.h>
int main()
{
    int x,sum;
    sum = 0;
    x = 1;
    loop: if (x < 6) {
        sum = sum + x;
        x = x + 1;
        goto loop;
    }
    printf ("The sum is: %d", sum);
}