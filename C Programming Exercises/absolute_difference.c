// Program that calculates the absolute difference between n and 51.
// If n is greater than 51 return triple the absolute difference.
// Author: Clare Tubridy

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Please enter a value for n: ");
    scanf("%d", &n);

    int absoluteDifference = abs(n - 51);
    
    if (n > 51){

        int result = 3 * absoluteDifference;
        printf("Triple the absolute difference = %d \n", result);
    }else{
        printf("The absolute difference is %d \n", absoluteDifference);
    }
    
    return 0;
}