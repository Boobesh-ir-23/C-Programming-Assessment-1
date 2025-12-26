#include<stdio.h>
int main()
{
    int x,y,sum;
    sum = 0;

    printf ("Enter the number to be reversed: ");
    scanf ("%d", &x);

    loop: if (x > 10){
        y = x%10;
        sum = (sum * 10) + y;
        x = x/10;
        goto loop;
    } else {
        sum = (sum * 10) + x;
        printf ("The reversed number is %d", sum);
    }
}
