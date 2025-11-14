/* AQUINO, RIZELLE FATE P. DIT1-2 */
#include <stdio.h>

int main() {
    int a = 20, b = 10;
    int sum, difference, product, quotient;
    int result_and, result_or, result_not;

    // Arithmetic operations
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    // Logical operators
    result_and = (a > 15) && (b < 15); // AND
    result_or = (a > 25) || (b < 15);  // OR
    result_not = !(a > 25);            // NOT

    printf("AND: %d\n", result_and);
    printf("OR: %d\n", result_or);
    printf("NOT: %d\n", result_not);

    // Assignment operators
    a += b; // a = a + b
    printf("Updated a: %d\n", a);

    return 0;
}
