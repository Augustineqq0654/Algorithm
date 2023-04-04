// 更相减损法
#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;
    printf("请输入两个数：");
    scanf("%d %d", &a, &b);
    printf("它们的最大公约数为：%d", gcd(a, b));
    return 0;
}

int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    if (a < b) {
        return gcd(b - a, a);
    }
    return gcd(a - b, b);
}
