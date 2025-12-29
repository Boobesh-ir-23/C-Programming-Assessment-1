// Get a number and print the two digit odd numbers

#include <stdio.h>

int disp_total_2digit_odd (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_total_2digit_odd (x);
    printf ("%d", result);
}

int disp_total_2digit_odd (int num){
    int y;
    int odd_count = 0;
    while (num > 0){
        y = num%100;
        num = num/10;
        
        if ((y%2 != 0) && (y > 10)){
            odd_count++;
        }
    }
    return odd_count;
}