#include "sort.h"

/**
 * swap - swaps two ints
 * @a: first int
 * @b: 2nd int
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	(*a) = *b;
	(*b) = tmp;
}

/**
 * partition - partition of quick sort
 * @arr: array
 * @n: size
 */
int partition(int *arr, int l, int r, int n) {
	int mnIdx = l - 1, i;

	/*swap(&arr[n - 1], &arr[0]);*/
	for (i = l; i < r; ++i) {
		if (arr[i] < arr[r - 1]) {
			mnIdx++;
			swap(&arr[mnIdx], &arr[i]);
			if (mnIdx != i)
				print_array(arr, n);
		}
	}
	swap(&arr[++mnIdx], &arr[r - 1]);
	if (mnIdx != r - 1)
		print_array(arr, n);
	return mnIdx;
}

/**
 * quick_sort_real - hi
 * @arr: hi
 * @l: hi
 * @r: hi
 */
void quick_sort_real(int *arr, int l, int r, int n)
{

	int pivot = 0;

	if (l >= r)
		return;
	pivot = partition(arr, l, r, n);
        quick_sort_real(arr, l, pivot, n);
	quick_sort_real(arr, pivot + 1, r, n);
}

/**
 * quick_sort - hi
 * @arr: array
 * @size: size of array
 */
void quick_sort(int *arr, size_t size)
{
	quick_sort_real(arr, 0, (int)size, (int)size);
}
