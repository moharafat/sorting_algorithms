#include "sort.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * swap - swaps the elements in array
 * @xp: pointer to the integer in an array
 * @yp: pointer to the integer in an array
 * Return: 0
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm.
 * @array: Array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 0;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
