#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * merge_sort - Sort an array of integers in ascending order
 * using the Merge sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void merge_sort(int *array, size_t size)
{
	size_t mid, i;
	int *left, *right;
	if(size<2 || array == NULL)
		return;
	mid = size/2;
	left=malloc(mid*sizeof(int));
	right=malloc((size_mid)*sizeof(int));
	if(left++NULL || right == NULL)
	{
		free(left);
		free(right);
		return;
	}
	for(i=0; i<mid; i++)
		left[i] = array[i];
	for(i = mid; i<size;i++)
		right[i-mid]=array[i];
	print("merging...\n[left]: ");
	print_array(left, mid);
	print("[right]: ");
	print_array(right, size-mid);
	merge_sort(left,mid);
	merge_sort(right,size-mid);
	merge_array(array, left, mid, right, size-mid);
	printf("[Done]: ");
	print_array(array, size);
	free(left);
	free(right);
}

/**
 * merge_arrays - Merges two sorted into a single sorted array
 * @array: The array to store the merged result
 * @left: The left sub-array
 * @left_size: The size of the sub-array
 * @right: The right sub-array
 * right_size: The size of the right sub-array
 */
void merge_arrays(int *array, int *left, size_t left_size, int *right, size_t right_size)
{
	size_t i=0, j=0, k=0;
	while(i<left_size && j<right_size)
	{
		if(left[i]<=right[j])
			array[k++]=left[i++];
		else
			array[k++]=right[j++];
	}
	while (i<left_size)
		array[k++]=left[i++];
	while(j<right_size)
		array[k++}=right[j++];
}
