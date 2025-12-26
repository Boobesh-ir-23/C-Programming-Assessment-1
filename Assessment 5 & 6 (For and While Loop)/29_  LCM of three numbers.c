#include <stdio.h>

int main()
{
    int x,y,z;
    int x1,y1,z1;
    int l1,l2,l3,k,i;
    
    printf ("Enter your first number: ");
    scanf ("%d", &x);
    
    printf ("Enter your second number: ");
    scanf ("%d", &y);
    
    printf ("Enter your third  number: ");
    scanf ("%d", &z);
    
    x1 = x;
    y1 = y;
    z1 = z;
    k = 0;
    i = 0;
    
    while (k == 0){
        i = x%y;
        if (i == 0){
            l1 = ((x1/y) * y1);
            k = 1;
        } else {
            x = y;
            y = i;
            i = 0;
        }
    }
    
    k = 0;
    i = 0;
    l3 = l1;
    
    while (k == 0){
        i = l1%z;
        if (i == 0){
            l2 = ((l3/z) * z1);
            printf ("The LCM is: %d", l2);
            k = 1;
        } else{
            l1 = z;
            z = i;
            i = 0;
        }
    }
}