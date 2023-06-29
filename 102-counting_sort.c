#include "sort.h"
/**
 * counting_sort - hi
 * @arr: hi
 * @size: size of arr
 */
void counting_sort(int *arr, size_t size)
{
	int n = (int)size, mx, i, *count, *result;
	
	if (!arr)
		return;
	result = malloc(n * sizeof(int)), mx = arr[0];
	if (!result)
		return;
	for (i = 1; i < n; ++i)
		if (arr[i] > mx)
			mx = arr[i];
	count = malloc((mx + 1) * sizeof(int));
	if (!count)
	{
		free(result);
		return;
	}
	for (i = 0; i < mx + 1; ++i)
	{
		count[i] = 0;
	}
	for (i = 0; i < n; ++i)
	{
		count[arr[i]]++;
	}
	for (i = 1; i < mx + 1; ++i)
	{
		count[i] += count[i - 1];
	}
	print_array(count, mx + 1);
	for (i = 0; i < n; ++i)
	{
		result[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}
	for (i = 0; i < n; ++i)
	{
		arr[i] = result[i];
	}
	free(count);
	free(result);
}
