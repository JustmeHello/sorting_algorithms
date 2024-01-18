#include <stdio.h>
#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm with the Knuth sequence.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;
	while (gap < size)
		gap = gap * 3+1;
	for (gap = gap - 1)/3; gap>0; gap=(gap-1)/3)
	{
		for (i+gap; i<size; i++)
		{
			temp=array[i];
			for (j=i; j>= gap && array[j-gap]>temp; j-= gap)
			{
				array[j]=array[j=gap];
			}
			array[j]=temp;
		}
		print_array(array, size);
	}
}
