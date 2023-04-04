// 最小公倍数
#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    printf("请输入两个数：");
    scanf("%d %d", &a, &b);
    printf("它们的最小公倍数为：%d", lcm(a, b));
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
