#include <stdio.h>
#include <math.h>

int convert_binary_to_decimal(long long n);
long long convert_decimal_to_binary(int n);

int convert_binary_to_decimal(long long n)
{
    int decimal_number = 0, i=0, remainder;
    while(n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimal_number += remainder*pow(2, i);
        ++i;
    }
    return decimal_number;
}

long long convert_decimal_to_binary(int n)
{
    long long binary_number = 0;
    int remainder, i=1, step = 1;

    while(n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, 余数= %d, 商= %d\n", step++, n, remainder, n/2);
        n /= 2;
        binary_number += remainder*i;
        i *= 10;
    }
    return binary_number;
}

int main()
{
    long long n;
    int decimal;
    printf("请输入一个二进制数：");
    scanf("%lld", &n);

    decimal = convert_binary_to_decimal(n);
    printf("二进制数 %lld 转换成十进制为 %d\n", n, decimal);

    n = convert_decimal_to_binary(decimal);
    printf("十进制数 %d 转换成二进制数为 %lld\n", decimal, n);

    return 0;
}