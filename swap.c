#include "sort.h"

void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
