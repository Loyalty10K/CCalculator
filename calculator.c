#include <stdio.h>

int main() {
    int x,y; //define 2 numbers
    // Asking the user for 2 numbers and using scanf to add it to the variables we've created
    printf("Please enter first number: ");
    scanf("%d", &x);
    printf("Your first number is: %d\n", x);
    printf("Please enter second number: ");
    scanf("%d", &y);
    printf("Your second number is: %d\n", y);
    // Asking the user for the operation
    printf("Please enter the operation you would like (+, -, *, /): ");
    char op;
    int result;
    scanf(" %c", &op);

    // This system is not really the best at checking what the user said, but it's the only one i know
    if (op == '+') {
        result = x + y;
        printf("Your result is: %d", result);
    } else if (op == '-') {
        result = x - y;
        printf("Your result is: %d", result);
    } else if (op == '*') {
        result = x * y;
        printf("Your result is: %d", result);
    } else if (op == '/') {
        result = x / y;
        printf("Your result is: %d", result);
    }
    return 0;
}
