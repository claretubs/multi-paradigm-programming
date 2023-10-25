// Check check two given integers, and return true if one of them is 30 or if their sum is 30.
// Author: Clare Tubridy

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool x = false;

    int n1, n2;
    printf("Please enter two values: ");
    scanf("%d %d", &n1, &n2);

    if (n1 ==30 || n2 == 30 || n1 + n2 == 30){
        x = true;
    }

    if(x){
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}