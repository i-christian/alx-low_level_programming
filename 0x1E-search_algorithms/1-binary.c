#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: param
 * @size: param
 * @value: param
 * Return: value position if found or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t pos = -1;
	int BEG = array[0];
	int i = 0;
	int END = array[size - 1];

	if (array == NULL)
	{
		return (pos);
	}

	while (BEG < END)
	{
		int MID = (BEG + END) / 2;

		printf("Searching in array: ");
		for (i = BEG; i < END; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		if (array[MID] == value)
		{
			pos = MID;
			return (pos);
		}
		else if (array[MID] > value)
		{
			END = MID - 1;
		}
		else
			BEG = MID + 1;
	}
	return (pos);
}
