#include <stdio.h>
#include <math.h>  // 引入数学库，用于计算平方根

int main() {
    int n, is_prime = 1;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    if (n <= 1) {  // 特判 n 小于等于 1 的情况
        is_prime = 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) {
        printf("%d 是素数", n);
    } else {
        printf("%d 不是素数", n);
    }
    return 0;
}
