#include <stdio.h>

int main()
{
    int number;
    printf("Please inter a number: ");
    scanf("%d", &number);
    printf("%d 的因数有：", number);

    for(int i=1; i<=number; i++)
    {
        if(number%i==0)
        printf("%d ", i);
    }

    return 0;
}