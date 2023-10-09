#include <stdlib.h>
#include <time.h>
#include <stdio.h>  // Include this header for printf

/* more headers go here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check if n is positive, negative, or zero */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}

