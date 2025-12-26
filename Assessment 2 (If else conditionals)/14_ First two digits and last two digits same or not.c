#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter a four digit number: ");
    scanf ("%d", &x);

    if (x > 999 && x < 10000){
        y = x/100;
        z = x%100;

        if (y == z){
            printf ("1");
        } else{
            printf ("0");
        }
    } else {
        printf ("Enter a valid two digit number");
    }
}
