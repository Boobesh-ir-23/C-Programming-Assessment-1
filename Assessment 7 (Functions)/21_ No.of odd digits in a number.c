// Get a number from user print the no.of odd digits in it.

#include <stdio.h>

int disp_total_odd_digits (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_total_odd_digits (x);
    printf ("%d", result);
}

int disp_total_odd_digits (int num){
    int y;
    int odd_count = 0;
    while (num > 0){
        y = num%10;
        num = num/10;
        
        if (y%2 != 0){
            odd_count++;
        }
    }
    return odd_count;
}