#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, base = 1;
	int len;

	/*check if the string is empty*/
	if (*b == '\0')
		return (0);

	/*check the length of the string*/
	for (len = 0; b[len];)
		len++;

	/*convert binary number to a decimal number*/
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		number += (b[len] - '0') * base;
		base *= 2;
	}

	return (number);
}
