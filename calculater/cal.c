#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;
    printf("\n Enter a Operator(+ - * /) : ");
    scanf("%c", &op);
    printf("\n Enter a num1 : ");
    scanf("%lf", &num1);
    printf("\n Enter a num2 : ");
    scanf("%lf", &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %.2lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult: %.2lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %.2lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %.2lf", result);
        break;
    default:
        printf("\nOnly enter these operators (+ - * /)");
    }

    return 0;
}