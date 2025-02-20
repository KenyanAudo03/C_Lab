#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num)
{
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main()
{
    double num1, num2, multiplier, quotient, product;

    // Input two numbers for division
    printf("Enter two numbers (dividend and divisor): ");
    scanf("%lf %lf", &num1, &num2);

    // Check for division by zero
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Compute the quotient
    quotient = num1 / num2;

    // Input multiplier
    printf("Enter the multiplier: ");
    scanf("%lf", &multiplier);

    // Compute the final product
    product = quotient * multiplier;

    // Since prime numbers are integers, we check if product is an integer
    if (product != (int)product)
    {
        printf("The product %.2lf is not an integer, so it cannot be prime.\n", product);
    }
    else
    {
        int int_product = (int)product;
        // Check if the integer product is prime
        if (is_prime(int_product))
        {
            printf("The product %d is a prime number.\n", int_product);
        }
        else
        {
            printf("The product %d is not a prime number.\n", int_product);
        }
    }

    return 0;
}
