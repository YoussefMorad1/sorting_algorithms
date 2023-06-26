#include "sort.h"

/**
 * bubble_sort - hi
 * @arr: hi
 * @n: size
 */
void bubble_sort(int *arr, size_t n) {
	int tmp = -1, operation = 0, i, j;

	for (i = 0; i < (int)n; ++i) {
		operation = 0;
		for (j = 0; j < (int)n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				print_array(arr, n);
				operation = 1;
			}
		}
		if (!operation) break;
	}
}

