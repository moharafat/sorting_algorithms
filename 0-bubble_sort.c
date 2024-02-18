#include "sort.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * swap - switches the 2 elements inside the index

 * @xp: int pointer
 * @yp: int pointer
 * Return: 0
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

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
