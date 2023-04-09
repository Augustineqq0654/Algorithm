
#include <stdio.h>
 
int main()
{
    int i, j, rows;
 
    printf("行数: ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\n");  // blank line after rows.

    for(i=rows; i>0; i--)
    {
        for(j=1; j<=i; j++)
         	printf("%d ", j);
        printf("\n");  // blank line before next row.
    }

    //金字塔
    int space, k=0;
    for(i=1; i<=rows; ++i,k=0)
    {
        for(space=1; space<=rows-i; ++space)
            printf("  ");

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    // 杨辉三角
    int coef=1;
    for(i=0; i<rows; i++)
    {
        for(space=1; space<=rows-i; space++)
            printf("  ");
        for(j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                coef=1;
            else
                coef=coef*(i-j+1)/j;
            printf("%4d", coef);
        }
        printf("\n");  // blank line between rows.
    }

    return 0;
}
