#include<stdio.h>
int main()
{
    int x;
    x = 5;
    loop: if (x > 0) {
        printf ("\n %d", x);
        x = x - 1;
        goto loop;
    }
}