// Print total number of single digit prime numbers

#include <stdio.h>

int disp_1digit_prime (int start, int end);

int main()
{
    int start_val = 1;
    int end_val = 10;
    
    int result = disp_1digit_prime (start_val, end_val);
    printf ("No.of prime numbers: %d", result);
}

int disp_1digit_prime (int start, int end){
    int prime_count = 0;
    for (int i = start; i < end; i++){
        int factors = 0;
        for (int j = 1; j <= i; j++){
            if (i%j == 0){
                factors++;
            }
        }
        if (factors == 2){
            prime_count++;
        }
        }
    return prime_count;
}