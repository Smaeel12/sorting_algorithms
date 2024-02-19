#include "sort.h"

/**
 *  bubble_sort - a function that sorts an array of integers in ascending
 *  order using the Bubble sort algorithm
 *  @array: The array to sort
 *  @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	bool no_swap = true;
	size_t i, j;

	j = 0;
	while (array && j < size)
	{
		no_swap = true;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				no_swap = false;
			}
		}
		if (no_swap)
			break;
		j++;
	}
}
