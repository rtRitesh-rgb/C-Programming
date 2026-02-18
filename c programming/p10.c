#include <stdio.h>
int main() {
    char calc;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &calc);
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch(calc) {
        case '+':
            printf("The sum is: %d\n", num1 + num2);
            break;
        case '-':
            printf("The difference is: %d\n", num1 - num2);
            break;
        case '*':
            printf("The product is: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("The quotient is: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}