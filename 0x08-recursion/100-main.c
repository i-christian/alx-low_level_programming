#include "main.h"
#include <stdio.h>

/**
 * main -check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("abcdecba");
	printf("%d\n", r);
	return (0);
}
