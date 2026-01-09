//Adding two 50 digit integer arrays and storing it in 51 digit array

#include <stdio.h>

int main()
{
    int array_1 [50] ={8, 2, 0, 5, 1, 9, 3, 7, 4, 6, 0, 1, 2, 8, 5, 5, 9, 3, 4, 7, 2, 0, 6, 8, 1, 3, 9, 4, 7, 5, 0, 2, 6, 1, 8, 3, 4, 9, 5, 7, 0, 1, 2, 4, 8, 6, 3, 5, 9, 2};
    
    int array_2 [50] = {1, 5, 9, 2, 8, 3, 4, 7, 0, 6, 5, 2, 8, 1, 9, 3, 4, 7, 6, 0, 8, 4, 1, 2, 5, 7, 9, 3, 0, 6, 2, 4, 8, 1, 5, 7, 9, 3, 6, 0, 4, 2, 8, 1, 5, 3, 7, 9, 6, 0};
    
    int sum_array [51];
    
    int sum;
    int carry = 0;
    
    for (int i = 49; i >=0; i--){
        sum = array_1 [i] + array_2 [i] + carry;
        
        if (sum > 10){
            carry = sum/10;
            sum = sum%10;
        } else {
            carry = 0;
        }
        
        sum_array [i] = sum;
        printf ("%d", sum_array[i]);
    }
}