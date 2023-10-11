#include "search_algos.h"

/**
 * print_array - Prints the contents of an array
 * @array: source of array to print
 * @l: left index of the array
 * @r: right index of the array
 */

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches a value in a sorted array using
 * binary search
 * @array: array to search in
 * @l: left index of the array
 * @r: right index of the array
 * @value: value to look for
 * Return: first index of the value in the array or -1
 */

int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (binary_search_index(array, l, m, value));
	}
	else if (value == *(array + m))
	{
		if ((m > 0) && (*(array + m - 1) == value))
		{
			return (binary_search_index(array, l, m, value));
		}
		return ((int)m);
	}
	else
	{
		return (binary_search_index(array, m + 1, r, value));
	}
}

/**
 * advanced_binary - Searches a value in a sorted array using a binary search.
 * @array: array to search in
 * @size: length of array
 * @value: value to look for
 * Return: first index of the value in the array or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_index(array, 0, size - 1, value));
}
