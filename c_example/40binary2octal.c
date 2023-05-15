#include <stdio.h>
#include <math.h>

int convert_binary_to_octal(long long binary_number);

int main()
{
    long long binary_number = 0; //initialize variable for binary number.
    printf("Enter a binary number: "); //prompt.
    scanf("%lld", &binary_number); //read binary number.
    printf("\n"); //separate line.
    printf("%lld in binary is %d in octal.\n", binary_number, convert_binary_to_octal
        (binary_number)); //dispatch function. Return octal number.
    return 0; //normally never reached.  This is just a way of exiting the program.  It is useful for debugging.
}

int convert_binary_to_octal(long long binary_number) {
    int octal_number = 0; 
    int decimal_number = 0;
    int i = 0;

    while(binary_number != 0)
    {
        decimal_number += (binary_number%10)*pow(2, i);
        ++i;
        binary_number /= 10;
    }

    i = 1;

    while(decimal_number != 0)
    {
        octal_number += (decimal_number%8)*i;
        decimal_number /= 8;
        i *= 10;
    }
    return octal_number;
}

long long convert_octal_to_binary(int octal_number)
{
    int decimal_number = 0;
    long long binary_number = 0;
    int i = 0;

    while(octal_number != 0)
    {
        decimal_number += (octal_number%10)*pow(8, i);
        ++i;
        octal_number /= 10;
    }

    i = 1;

    while(decimal_number != 0)
    {
        binary_number += (decimal_number%2)*i;
        decimal_number /= 2;
        i *= 10;
    }
    return binary_number;
}