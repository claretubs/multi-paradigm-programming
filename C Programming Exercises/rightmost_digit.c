// Program to check if two or more non-negative given integers have the same rightmost digit.
// Author: Clare Tubridy

#include <stdio.h>
#include <stdbool.h>

bool hasSameRightmostDigit(int num1, int num2, int num3) {
    int lastDigit1 = num1 % 10;
    int lastDigit2 = num2 % 10;
    int lastDigit3 = num3 % 10;

    return (lastDigit1 == lastDigit2 || lastDigit1 == lastDigit3 || lastDigit2 == lastDigit3);
}

int main(){

    int n1, n2, n3;
    printf("Enter 3 non-negative integers: ");
    scanf("%d \n %d \n %d", &n1, &n2, &n3);

    bool result = hasSameRightmostDigit(n1, n2, n3);

    if (result) {
        printf("Two or more numbers have the same rightmost digit.\n");
    } else {
        printf("No numbers have the same rightmost digit.\n");
    }
    return 0;
}
