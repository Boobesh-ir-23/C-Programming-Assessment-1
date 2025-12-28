//Get a number from user and check for single digit perfect sqaure 

#include <stdio.h>

int disp_single_digit_square (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_single_digit_square (x);
    printf ("%d", result);
}

int disp_single_digit_square (int num){
    int y;
    int p_square = 0;
    while (num > 0){
        y = num%10;
        num = num/10;
        
        for (int i = 1; i <= y; i++){
            if ((y/i == i) && (y%i == 0)){
                p_square++;
                break;
            }
        }
    }
    return p_square;
}