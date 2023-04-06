#include <stdio.h>
#include <math.h>  // 引入数学库，用于计算平方根

int is_prime(int n) {  // 判断一个数是否为素数
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m, n;
    printf("请输入两个正整数（用空格隔开）：");
    scanf("%d %d", &m, &n);
    printf("%d 和 %d 之间的素数有：\n", m, n);
    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
