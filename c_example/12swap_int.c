#include <stdio.h>

int main()
{
    int a, b;
    a = 11;
    b = 99;
    
    printf("交换之前 - \n a = %d, b = %d \n\n", a, b);
    
    // 不使用临时变量交换两个整数的值
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("交换后 - \n a = %d, b = %d \n\n", a, b);    
    
    // 位运算
    a = a^b;
    b = a^b;
    a = a^b;
    printf("交换后 - \n a = %d, b = %d \n", a, b);

    return 0;

}
