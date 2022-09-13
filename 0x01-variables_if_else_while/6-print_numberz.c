#include <stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
