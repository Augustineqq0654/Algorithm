#include <stdio.h>

int main()
{
    char operator;
    double first_number, second_number, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two floating point numbers: ");    
    scanf("%lf %lf", &first_number, &second_number);

    switch(operator)
    {
        case '+':
            result = first_number + second_number; 
            printf(" %lf + %lf = %lf\n", first_number, second_number, result);
            break; 
        case '-':
            result = first_number - second_number;
            printf(" %lf - %lf = %lf\n", first_number, second_number, result);
            break;
        case '*':
            result = first_number * second_number;
            printf(" %lf * %lf = %lf\n", first_number, second_number, result);
            break;
        case '/':
            if(second_number==0)
            {
                printf("Cannot divide by zero\n");
                return -1;
            }
            result = first_number / second_number;
            printf(" %lf / %lf = %lf\n", first_number, second_number, result);
            break;
        default:
            printf("Error! Invalid operator.\n");
            return -1;  
    }

    return 0;

}