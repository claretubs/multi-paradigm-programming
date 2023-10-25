// Program checks if y is greater than x,
// and z is greater than y from three given integers x, y, z.
// Author: Clare Tubridy

#include <stdio.h>

int main(){

    int x, y, z;
    printf("Please enter values for x, y and z: ");
    scanf("%d \n %d \n %d", &x, &y, &z);

    if (y > x){
        printf("The value %d is greater than %d \n", y, x);
    } else {
        printf("The value %d is not greater than %d \n", y, x);
    }

    if (z > y){
        printf("The value %d is greater than %d \n", z, y);
    } else {
        printf("The value %d is not greater than %d \n", z, y);
    }

    return 0;
}