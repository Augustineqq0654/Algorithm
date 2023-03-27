#include <stdio.h>
// sizeof 是单目操作符，类似 ++、-- 等，不是函数

int main()
{
    int integer_type;
    float float_type;
    double double_type;
    char char_type;

    printf("Size of int:    %ld bytes\n", sizeof(integer_type));
    printf("Size of float:  %ld bytes\n", sizeof(float_type));
    printf("Size of double: %ld bytes\n", sizeof(double_type));
    printf("Size of char:   %ld byte\n", sizeof(char_type));

    int a;
    long b;
    long long c;
 
    double e;
    long double f;
 
 
    printf("Size of int = %ld bytes \n", sizeof(a));
    printf("Size of long = %ld bytes\n", sizeof(b));
    printf("Size of long long = %ld bytes\n", sizeof(c));
 
    printf("Size of double = %ld bytes\n", sizeof(e));
    printf("Size of long double = %ld bytes\n", sizeof(f));
    return 0;

}