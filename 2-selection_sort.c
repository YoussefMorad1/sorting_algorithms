#include "sort.h"
/**
 * selection_sort - hi
 * @array: hi
 * @size: size
 */
void selection_sort(int *arr, size_t size)
{
	int i, j, mnIdx = 0, n = size, tmp;

	for (i = 0; i < n; ++i)
	{
		mnIdx = i;
		for (j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[mnIdx])
				mnIdx = j;
		}
		tmp = arr[mnIdx];
		arr[mnIdx] = arr[i];
		arr[i] = tmp;
	}
}
