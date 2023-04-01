#include <stdio.h>
// (四年一闰，百年不闰) || 四百年再闰
int main()
{
    int year;

    printf("输入年份：");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100!= 0))
        printf("%d 是闰年", year);
    else
        printf("%d 不是闰年", year);

    return 0;
}

//test