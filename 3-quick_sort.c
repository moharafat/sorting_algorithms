#include "sort.h"
/**
 * swap - swaps the elements in array
 * @xp: pointer to the integer in an array
 * @yp: pointer to the integer in an array
 * Return: 0
 */
void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
/**
 * partition - takes last elment in array as pivot,
 * then places the pivot where all elemnts before
 * it are smaller and all elments after are bigger
 * @array: array given to be sorted
 * @high: highest idx in array
 * @low: highest idx in array
 * @size: number of elembents to be sorted in array
 * Return: the pivot's idx
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (high > (i + 1))
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort_recursive - Recursively sorts an array of integers
 * using the Quick sort algorithm and Lomuto partition scheme.
 * @array: Array to be sorted.
 * @low: Starting index of the partition to be sorted.
 * @high: Ending index of the partition to be sorted.
 * @size: Size of the array.
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_idx - 1, size);
		quick_sort_recursive(array, pivot_idx + 1, high, size);
	}
}
/**
 * quick_sort -sorts an array of integers using the Bubble
 * @array: array given to be sorted
 * @size: number of elembents to be sorted in array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_recursive(array, 0, size - 1, size);
}
