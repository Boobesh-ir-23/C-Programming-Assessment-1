//Print the no.of single digit prime numbers in a number

#include <stdio.h>

int disp_single_digit_prime (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    int result = disp_single_digit_prime (x);
    printf ("%d", result);
}

int disp_single_digit_prime (int num){
    int y;
    int prime_count = 0;
    
    while (num > 0){
        int factors = 0;
        y = num%10;
        num = num/10;
        
        for (int i = 1; i <= y; i++){
            if (y%i == 0){
                factors++;
            }
        }
        if (factors == 2){
            prime_count++;
        }
    }
    
    return prime_count;
}