// Total count of numbers below 100000 whose sum of digits is 14

#include <stdio.h>

void disp_count_sum14 (int start, int end);

int main()
{
    int start_val = 1;
    int end_val = 100000;
    
    disp_count_sum14 (start_val, end_val);
}

void disp_count_sum14 (int start, int end){
    int y,num;
    int count = 0;
    
    for (int i = start; i < end; i++){
        
        int num = i;
        int sum = 0;
        
        while (num > 0){
            
            y = num%10;
            num = num/10;
            sum = sum + y;
            
        }
        
        if (sum == 14){
            count++;
        }
    }
    
    printf ("%d", count);
}