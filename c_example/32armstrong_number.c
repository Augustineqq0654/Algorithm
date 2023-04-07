#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, sum=0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    m = n;
    while(m>0)
    {
        digit = m % 10; // get units digit
        sum += pow(digit, 3); // add each of them
        m /= 10; // remove the units digit
    }
    if(sum == n)
        printf("%d is Armstrong number. \n", n);
    else
        printf("%d is not Armstrong number.\n", n);

    return 0;
}