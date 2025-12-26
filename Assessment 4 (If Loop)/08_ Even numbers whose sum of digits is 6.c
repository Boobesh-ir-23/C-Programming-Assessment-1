#include<stdio.h>
int main()
{
    int x, sum,y,z;
    x = 10;
    sum = 0;
    
    loop: if (x < 100){
        y = x/10;
        z = x%10;
        sum = y + z;
        if (sum == 6){
            printf ("\n %d", x);
            x = x + 2;
            goto loop;
        } else{
            x = x + 2;
            goto loop;
        }
    }
}