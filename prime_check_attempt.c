#include <stdio.h>

int main()
{
    int a, b, multiplier;

    // Input from the command line
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for multiplier: ");
    scanf("%d", &multiplier);

    // Gets the quotient of a and b
    int quotient = a / b;

    // Gets the product of the quotient and the multiplier
    int product = quotient * multiplier;

    // Prints the product
    printf("Product: %d\n", product);

    // Checks if the product is a prime number
    if (product != (int)product)
    {
        printf("The product %.2lf is not an integer, so it cannot be prime.\n", product);
    }
    else
    {
        int int_product = (int)product;
        if (int_product <= 1)
        {
            printf("The product %d is not a prime number.\n", int_product);
        }
        else
        {
            for (int i = 2; i * i <= int_product; i++)
            {
                if (int_product % i == 0)
                {
                    printf("The product %d is not a prime number.\n", int_product);
                    return 0;
                }
            }
            printf("The product %d is a prime number.\n", int_product);
        }
    }
}