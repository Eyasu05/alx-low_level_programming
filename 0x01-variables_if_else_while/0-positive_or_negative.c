#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* 0-positive_or_negative.c */

/* 
* main - if statement which print positive, negative or zero by iterating random number
* and return 0
*/

BETTY_STYLE="betty-style";
BETTY_DOC="betty-doc";
	
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

