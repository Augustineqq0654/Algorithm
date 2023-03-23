#include <stdio.h>

int main()
{
    int first_number, second_number, sum_of_two_numbers;
    printf("请输入两个数（以空格分割）：");
    scanf("%d %d", &first_number, &second_number);
    sum_of_two_numbers = first_number + second_number;
    printf("%d + %d = %d", first_number, second_number, sum_of_two_numbers);

    return 0;
}