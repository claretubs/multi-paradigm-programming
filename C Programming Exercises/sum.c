// Program computes the sum of the two given integers.
// If the sum is in the range 10..20 inclusive return 30.
// Author: Clare Tubridy

#include <stdio.h>

int main(){

    int n1, n2;
    printf("Please enter two values: ");
    scanf("%d %d", &n1, &n2);

    int sum = n1 + n2;

    if (sum >= 10 && sum <= 20){
        sum = 30;
    }
    printf("%d \n", sum);

    return 0;
}