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
