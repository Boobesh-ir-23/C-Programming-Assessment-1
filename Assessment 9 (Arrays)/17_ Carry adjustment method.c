//Convert 2 digit number into single digits and add the carry to the next number...

#include <stdio.h>

void add_carry (int num[], int size);
void display (int num[], int size);

int main()
{
    int in_num[5] = {23,45,67,98};
    
    add_carry (in_num, 5);
    
}

void add_carry (int num[], int size){
    int x,y;
    for (int i = 0; i < size; i++){
        if (num[i] > 9){
            x = num[i]%10;
            y = num[i]/10;
            num[i] = x;
            num [i+1] = num[i+1] + y;
        } 
    }
    display (num, 5);
}

void display (int num[], int size){
    printf ("The modified array: \n");
    for (int j = 0; j < size; j++){
        printf ("%d,", num[j]);
    }
}