#include <stdio.h>

int main()
{
    int a  = 12;
    int b = 5;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;


    printf("Sum: %d\n", sum); 
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}