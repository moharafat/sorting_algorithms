#include "sort.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * swap - swaps the elements in array
 * @a: pointer to the integer in an array
 * @b: pointer to the integer in an array
 * Return: 0
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array with selection sort algorithm.
 * @array: Array to be sorted.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
