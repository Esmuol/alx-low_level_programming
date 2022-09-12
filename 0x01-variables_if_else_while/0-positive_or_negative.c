#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Description:using the main function
*this program prints "programming is positive, zero, or negative
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
