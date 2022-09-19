#include "main.h"

/**
 * swap_int - check description
 * Description: swaps the values of two integers
 * @a: integer a
 * @b: integer b
 *
 * Return: Void
 *
 */

void swap_int(int *a, int *b)
{
	int num = *b;
	*b = *a;
	*a = num;
}

