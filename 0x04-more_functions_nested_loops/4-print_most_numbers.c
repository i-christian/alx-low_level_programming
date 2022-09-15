#include "main.h"

/**
 * print_most_numbers - read description 
 * Description: a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int num = '0';

	for (; num <'10'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
