#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/*
 * main - Entry point
 *
 * Returnn: 0 (Success)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	d = n%10;
	printf("Last digit of %d is %d and is", n, d);
	if (d == 0)
		printf(" 0\n");
	else if (d < 6 && d != 0)
		printf(" less than 6 and not 0\n");
	else if (d > 5)
		printf(" greater than 5\n");
	return (0);
}
