#include<stdio.h>
int main()
{
    int x;
    x = 11;
    loop: if (x < 20) {
        if (x%2 != 0) {
        printf ("\n %d", x);
        x = x + 2;
        goto loop;
    }
}
}