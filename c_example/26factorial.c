#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("%d 的阶乘为 %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if (n < 0) {
        printf("无法计算负数的阶乘！");
        return -1;  // 返回一个特殊值表示错误
    } else if (n == 0) {
        return 1;
    } else {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}
