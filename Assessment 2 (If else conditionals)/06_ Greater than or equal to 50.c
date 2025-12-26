#include<stdio.h>
int main()
{
    int x;
    printf ("Enter a number: ");
    scanf ("%d", &x);

    if (x >= 50){
        printf ("1");
    } else {
        printf ("0");
    }
}