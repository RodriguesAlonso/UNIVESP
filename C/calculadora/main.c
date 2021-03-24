#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num1;
    double num2;
    char operador;

    printf("Enter a firsti number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &operador);
    printf("Enter a second number: ");
    scanf("%lf", &num2);

    if (operador == '+')
    {
        printf("Answer: %f", num1 + num2);
    }
        else if (operador == '-')
        {
            printf("Answer: %f", num1 - num2);
        }
        else if (operador == '*')
        {
            printf("Answer> %f", num1 * num2);
        }
        else if (operador == '/')
        {
            printf("Answer: %f", num1 / num2);
        }
    else{
        printf("Invalid opeator.");
    }
    return 0;
}
