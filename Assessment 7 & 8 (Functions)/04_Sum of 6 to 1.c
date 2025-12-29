// Print sum 6 to 1

#include <stdio.h>

void disp_rsum (int start, int end);

int main()
{
    int start_val = 6;
    int end_val = 1;
    
    disp_rsum (start_val, end_val);
}

void disp_rsum (int start, int end){
    int sum = 0;
    for (int i = start; i >= end; i--){
        sum = sum + i;
    }
    printf ("%d", sum);
}