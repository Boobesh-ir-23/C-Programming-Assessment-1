// Get a 4 digit number and check whether the middle terms are prime or not

#include <stdio.h>

void middle_2digits_prime (int num);

int main()
{
    int x;
    printf ("Enter your four digit number: ");
    scanf ("%d", &x);
    
    middle_2digits_prime (x);
}

void middle_2digits_prime (int num){
    int y = num%1000;
    y = y/10;
    int prime = 1;
    
    for (int i = 2; i < y; i++){
        if (y%i == 0){
            prime = 0;
            break;
        } 
    }
    
    if (prime == 1){
        printf ("Prime");
    } else {
        printf ("Not Prime");
    }
}