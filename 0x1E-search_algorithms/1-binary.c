#include "search_algos.h"

/**
 * binary_search - search for value in a sorted array
 * @array: pointer to array to search for
 * @size: size of array
 * @value: target value to search for
 * Return: target value index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");


		if (array[mid] < value)
			start =  mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
