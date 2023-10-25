// Program that accepts two integers and returns true if either one is 5,
// or their sum, or difference, is 5.
// Author: Clare Tubridy

#include <stdio.h>
#include <stdbool.h>

int main(){
    bool x = false;

    int n1, n2;
    printf("Please enter two values: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == 5 || n2 == 5 || n1 + n2 == 5 || n1 - n2 == 5 || n2 - n1 == 5){
        x = true;
    }

    if(x){
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
