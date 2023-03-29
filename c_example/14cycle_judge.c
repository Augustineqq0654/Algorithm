#include 	<stdio.h>

int main()
{
    int i;

    for(i=1; i<10; i++)
    {
        if(i%2)
            printf(" %2d 是奇数\n",i);
        else
            printf(" %2d 是偶数\n",i);
    }

    return 0;
}