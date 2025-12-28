// Printing the largest 4-digit number which is divisible by 7 and 9

#include <stdio.h>

void disp_biggest_4digit_div7_9 (int start, int end);

int main()
{
    int start_val = 1000;
    int end_val = 9999;
    
    disp_biggest_4digit_div7_9 (start_val, end_val);
}

void disp_biggest_4digit_div7_9 (int start, int end){
    int l_number;
    for (int i = start; i <= end; i++){
        if ((i%7 == 0 ) && (i%9 == 0)){
            l_number = i;
        }
    }
    
    printf ("The largest 4 digit number which is divisible by both 9 and 7 is %d", l_number);
    
}