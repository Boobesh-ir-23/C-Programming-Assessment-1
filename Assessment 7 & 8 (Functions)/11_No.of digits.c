#include <stdio.h>

void count_total_digits (int num);

int main()
{
    int x;
    printf ("Enter your number: ");
    scanf ("%d", & x);
    
    count_total_digits (x);
}

void count_total_digits (int num){
    int count = 0;
    while (num > 0){
        num = num/10;
        count++;
    }
    printf ("%d", count);
}