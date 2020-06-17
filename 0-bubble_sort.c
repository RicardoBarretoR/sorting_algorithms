#include "sort.h"
/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *@array: pointer that point to array of elements
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, loop;

	while (1)
	{


		if (array == NULL && size < 2)
			return;
		loop = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				loop = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;

				print_array(array, size);
			}
		}
		if (loop == 0)
			break;
	}
}
