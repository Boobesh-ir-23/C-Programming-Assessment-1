#include <stdio.h>

int main()
{
    int x,i,j,y,sum;
    printf ("Enter your number: ");
    scanf ("%d", &x);
    
    j = 0;
    sum = 0;
    
    for (i = 1; i <= x; i++){
        if (x%i == 0){
            j = j + 1;
        }
    }
    while (x > 0){
        y = x%10;
        sum = sum + y;
        x = x/10;
    }
    if (j == 2){
        if (sum == 14){
            printf ("Prime and sum of digits is 14");
        } else {
            printf ("Prime but sum of digits is not 14");
        }
    }else{
        if (sum == 14){
            printf ("Not Prime but sum of digits is 14");
        } else {
            printf ("Not Prime and sum of digits is not 14");
        }
    }
}
   
    