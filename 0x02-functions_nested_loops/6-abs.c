#include "main.h"

/**
 * _abs - Check main
 * @r: an integer parameter
 * Description: this function returns the absolute value of a number
 * Return: Abs. value of the parameter
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (-1 * r);
}
