#include "main.h"
#include <unistd.h>

/**
 * main - program starts here
 *
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
		_putchar(word[j]);
	_putchar('\n');

	return (0);
}
