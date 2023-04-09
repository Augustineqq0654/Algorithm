#include <stdio.h>

int main()
{
    int i, j, count;
    int start, end;

    for(i=1; i<=10; i++)
    {
        for(j=i; j<=100; j+=10)
            printf("%4d", j); //%3d means three digits, 3 spaces between them.
        printf("\n"); //End of line. Go to next line.
    }

    printf("\n");
    start = 2, end =10;
    for(i=start; i<=end; i++)
    {
        count = i;
        for(j=1; j<=10; j++)
        {
            printf("%4d", count*j);
        }
        printf("\n");
    }
    return 0;
}