#include <stdio.h>
#include <math.h>

int main(void)
{

    float a; 
    float b;
    float result;
    char op;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &op);

     if (op == '+')
    {
        result = a + b;
        printf("The result of %.2f + %.2f = %.2f\n", a, b, result);
    }
    else if (op == '-')
    {
        result = a - b;
        printf("The result of %.2f - %.2f = %.2f\n", a, b, result);
    }
    else if (op == '*')
    {
        result = a * b;
        printf("The result of %.2f * %.2f = %.2f\n", a, b, result);
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            result = a / b;
            printf("The result of %.2f / %.2f = %.2f\n", a, b, result);
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    
    return 0;

}