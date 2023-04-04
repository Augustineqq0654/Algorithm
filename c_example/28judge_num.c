#include <stdio.h>

int main() {
    int n, count = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    if (n == 0) {  // 特判输入为 0 的情况
        printf("输入的数是 1 位数");
        return 0;
    }
    while (n != 0) {
        n /= 10;  // 将 n 除以 10
        count++;  // 计数器加 1
    }
    printf("输入的数是 %d 位数", count);
    return 0;
}
