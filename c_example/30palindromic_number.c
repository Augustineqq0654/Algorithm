#include <stdio.h>

int main() {
    int n, original, reversed = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;  // 将 n 的最后一位加到 reversed 的末尾
        n /= 10;  // 将 n 的最后一位删除
    }
    if (original == reversed) {
        printf("%d 是回文数", original);
    } else {
        printf("%d 不是回文数", original);
    }
    return 0;
}
