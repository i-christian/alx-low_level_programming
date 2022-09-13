#include "main.h"

/**
 * print_times_table - prints times table from numbers 0-14
 * @m: input integer
 * Return: nothing
 */

void print_times_table(int m)
{
	int i, j;

	if (m > 0 && m < 15)
	{
		for (i = 0; i <= m; i++)
		{
			_putchar('0');
			for (j = 1; j <= m; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - formmatted characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9&&n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

