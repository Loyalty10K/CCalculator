#include<stdio.h>

int main() {
    int x,y;
    printf("Please enter first number: ");
    scanf("%d", &x);
    printf("Your first number is: %d\n", x);
    printf("Please enter second number: ");
    scanf("%d", &y);
    printf("Your second number is: %d\n", y);

    printf("Please enter the operation you would like (+, -, *, /): ");
    char op;
    int result;
    scanf(" %c", &op);

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