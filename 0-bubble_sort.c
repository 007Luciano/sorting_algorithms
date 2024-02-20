#include "sort.h"
/**
 * swapper - Swap two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swapper(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order
 * @array: An array of integers to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble_s = false;

	if (array == NULL || size < 2)
		return;

	while (bubble_s == false)
	{
		bubble_s = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapper(array + i, array + i + 1);
				print_array(array, size);
				bubble_s = false;
			}
		}
		len--;
	}
}
