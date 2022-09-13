#include "main.h"

/**
 * _islower - check main
 * Return: 1 if lowercase or 0 if is upppercase
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

