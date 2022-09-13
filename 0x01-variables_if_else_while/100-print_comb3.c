#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the number is positive, zero or negative
 * 
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
		int d;
		
		for (d =0; d < 90; d++)
		{
			putchar ((d / 10) + '0');
			putchar ((d % 10) + '0');
			if (d != 90)
			{
				putchar(',');
				putchar(' ');
			}
		}
		
		putchar('\n');
		return (0);
}
