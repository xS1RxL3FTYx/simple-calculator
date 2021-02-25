#include <stdio.h>

int main()
{
    char Operator;
    float num1, num2, result = 0;
/*Asks user to input the type of arithmatic they want to do*/
    printf("\n Please Enter an one of the following (+, -, *, /)  :  ");
    scanf_s("%c", &Operator);
/*Asks user the two numbers to input for the mathmatic equation*/
    printf("\n Please enter two numbers: num1 and num2  :  ");
    scanf_s("%f%f", &num1, &num2);

    switch (Operator)
    {
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
        result = num1 / num2;
        break;
    default:
        printf("\n You have enetered an Invalid Operator ");
    }
    /*If the user enters a non operator value (+, -, *, /) then this message will appear*/
    printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);

    return 0;
}