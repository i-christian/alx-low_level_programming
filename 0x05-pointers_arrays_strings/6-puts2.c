/*
 * File: 6-puts2.c
 * Auth: Christian
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	 int index = 0, length = 0;

	/*calculates the string length*/

	while (str[index++])
		length++;

	/*prints every other character of the string*/

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
