#include <stdio.h>

int main()
{
    int base, exponent;
    long long result = 1;

    printf("Enter base: "); 
    scanf("%d", &base); 
    printf("Enter exponent: "); 
    scanf("%d", &exponent);

    if (exponent < 0) 			/* check for negative exponent */
    { 					/* if so, make it positive */
        exponent = -exponent; 		/* then negate it */
    } 					/* and then call the function again */
    for (; exponent > 0; exponent--) 	/* loop for each term */
        result *= base; 			/* multiply it */
    printf("result: %lld.\n", result); /* print the result */
    return 0; 				/* and end the program */

}