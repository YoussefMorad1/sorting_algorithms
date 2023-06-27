#include "sort.h"

void merge(int *tar, int *lft, int lsz, int *rht, int rsz, int *arr) {
	int idx = 0, i = 0, j = 0, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(lft, lsz);
	printf("[right]: ");
	print_array(rht, rsz);
	while (idx < lsz + rsz) {
		if (i == lsz || (j < rsz && rht[j] < lft[i]))
			arr[idx++] = rht[j++];
		else
			arr[idx++] = lft[i++];
	}
	for (k = 0; k < lsz + rsz; ++k) {
		tar[k] = arr[k];
	}
	printf("[Done]: ");
	print_array(arr, lsz + rsz);
}

void real_merge_sort(int *arr, int n, int *tmp) {
	if (n <= 1) return;
	real_merge_sort(arr, n / 2, tmp);
	real_merge_sort(arr + n / 2, n - n / 2, tmp);
	merge(arr, arr, n / 2, arr + n / 2, n - n / 2, tmp);
}

void merge_sort(int *arr, size_t size)
{
	int *tmp = malloc(size * sizeof(int));

	if (!tmp)
		return;
	real_merge_sort(arr, size, tmp);
	free(tmp);
}
