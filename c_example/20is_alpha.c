#include 	<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z') )
        printf("%c is a alpha", c);
    else
        printf("%c is not a alpha", c);

    return 0;

}