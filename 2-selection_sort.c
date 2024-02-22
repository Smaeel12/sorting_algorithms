#include "sort.h"

/**
 * selection_sort -  a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: The array to sort
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, mi;
	int tmp;

	i = 0;
	while (array && i < size && size > 1)
	{
		mi = i;
		for (j = mi + 1; j < size; j++)
		{
			if (array[j] < array[mi])
				mi = j;
		}
		if (mi != i)
		{
			tmp = array[i];
			array[i] = array[mi];
			array[mi] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
