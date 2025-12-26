#include<stdio.h>
int main()
{
    int x;
    x = 1;
    loop: if (x < 10) {
        if (x%2 != 0) {
        printf ("\n %d", x);
        x = x + 2;
        goto loop;
    }
}
}