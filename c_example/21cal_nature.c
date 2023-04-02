#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Please input a integer:");
    scanf("%d", &n);

    for(i=1; i<=n; ++i)
        sum+=i;
    printf("Sum = %d", sum);

    return 0;
}

int add_numbers(int n)
{
    if(n!=0)
        return n+add_numbers(n-1);
    else
        return 0;
}

//math
int add_number(int n)
{
    return (1+n)*n/2;
}