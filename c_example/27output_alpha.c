#include <stdio.h>

int main() {
    char ch = 'A';  // 初始化为 A
    for (ch; ch <= 'Z'; ch++) {
        printf("%c ", ch);  // 输出当前字母
    }
    return 0;
}
