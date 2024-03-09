#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';

    // Typecasted an integer to a float, float to int and a character to int
    float result1 = (float)a / b;
    int result2 = (int)b;
    char result3 = (char)(c + 1);

    printf("Typecasting examples:\n");
    printf("Result 1: %f\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %c\n", result3);

    // Testing precedence
    int x = 5, y = 3, z = 2;
    int result4 = x * y + z; // Multiplication has higher precedence than addition
    int result5 = x - y / z; // Division has higher precedence than subtraction
    int result6 = x / y * z; //Same precedence level, so it operates from left to right

    printf("\nPrecedence examples:\n");
    printf("Result 4: %d\n", result4);
    printf("Result 5: %d\n", result5);
    printf("Result 6: %d\n", result6);
    return 0;
}
