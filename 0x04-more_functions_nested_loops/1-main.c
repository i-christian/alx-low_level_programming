#include "main.h"
#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}

