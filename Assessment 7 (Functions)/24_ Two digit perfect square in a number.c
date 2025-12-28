//Get a number from user and check for two digit perfect sqaure 

#include <stdio.h>

int disp_two_digit_square (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_two_digit_square (x);
    printf ("%d", result);
}

int disp_two_digit_square (int num){
    int y;
    int p_square = 0;
    while (num > 0){
        y = num%100;
        num = num/10;
        
        for (int i = 1; i <= 9; i++){
            if ((y/i == i) && (y%i == 0) && (y > 10)){
                p_square++;
                break;
            }
        }
    }
    return p_square;
}