#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("请输入一个正整数：");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (is_prime(i) && is_prime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            return 0;
        }
    }
    printf("%d 不能表示为两个素数之和", num);
    return 0;
}
