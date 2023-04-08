
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

    return 0;
}
