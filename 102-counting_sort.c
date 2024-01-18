#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order
 * using the Counting sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *counting_array, *output;
	size_t i, max = 0;
	if(size<2)
		return;
	for (i=0; i<size; i++)
	{
		if ((size_t)array[i] >max)
			max = array[i];
	}
	counting_array = malloc((max+1) * sizeof(int));
	if (counting_array == NULL)
		return;
	for(i=0; i<size; i++)
		counting_array[array[i]]++;
	print_array(counting_array, max +1);
	for(i=1; i<=max; i++)
		counting_array[i] += counting_aaray[i-1];
	output = malloc(size*sizeof(int));
	if (output == NULL)
	{
		free(counting_array);
		return;

	}
	for (i=0; i<size; i++)
		array[i]=output[i];
	print_array(array, size);
	free(counting_array);
	free(output);
}
