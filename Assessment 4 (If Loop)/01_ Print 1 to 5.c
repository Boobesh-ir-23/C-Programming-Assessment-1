#include<stdio.h>
int main()
{
    int x;
    x = 1;
    loop: if (x < 6) {
        printf ("\n %d", x);
        x = x + 1;
        goto loop;
    }
}