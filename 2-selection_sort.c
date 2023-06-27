#include "sort.h"

/**
 * selection_sort - hi
 * @array: hi
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	int i, j, mnIdx, n = size;

	for (i = 0; i < (int)n; ++i)
	{
		mnIdx = i;
		for (j = i + 1; j < (int)n; ++j)
		{
			if (arr[j] < arr[mnIdx])
				mnIdx = j;
		}
		tmp = arr[mnIdx];
		arr[mnIdx] = arr[i];
		arr[i] = tmp;
	}
}
