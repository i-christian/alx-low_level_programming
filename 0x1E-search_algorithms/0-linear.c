#include "search_algos.h"

/**
 * linear_search - a function that searches for an element
 * @array: param
 * @size: param
 * @value: param
 * Return: Index where the value is found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;
	int pos = -1;

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			pos = index;
		}
		index += 1;
	}
	return (pos);

}
