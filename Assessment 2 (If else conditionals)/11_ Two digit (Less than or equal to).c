#include<stdio.h>
int main()
{
    int x,y,z;
    printf ("Enter a two digit number: ");
    scanf ("%d", &x);

    if (x > 9 && x < 100){
        y = x/10;
        z = x%10;
        if (y <= z){
            printf ("1");
        } else{
            printf ("0");
        }
    } else {
        printf ("Enter a valid two digit number");
    }
}
