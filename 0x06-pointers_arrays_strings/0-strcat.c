#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: the destination string
 *@src: the source string
 *Return: The source string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	/*find the length of the first string*/

	while (dest[dest_len])
		dest_len++;

	/*add the first character of src after the character of dest*/

	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
