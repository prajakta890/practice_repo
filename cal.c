#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^) or 'h' for hexadecimal: ");
    scanf(" %c", &operator);

    if (operator == 'h') {
        unsigned int hex_num1, hex_num2;
        printf("Enter two hexadecimal numbers (e.g., 1A 2B): ");
        scanf("%x %x", &hex_num1, &hex_num2);


        switch (operator) {
            case '+':
                result = hex_num1 + hex_num2;
                break;
            case '-':
                result = hex_num1 - hex_num2;
                break;
            case '*':
                result = hex_num1 * hex_num2;
                break;
            case '/':
                if (hex_num2 != 0) {
                    result = (double)hex_num1 / hex_num2;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            case '^':
                result = pow(hex_num1, hex_num2);
                break;
            default:
                printf("Error: Invalid operator.\n");
                return 1;
        }
    } else {
    
        printf("Enter two decimal numbers: ");
        scanf("%lf %lf", &num1, &num2);

       
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            case '^':
                result = pow(num1, num2);
                break;
            default:
                printf("Error: Invalid operator.\n");
                return 1;
        }
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
