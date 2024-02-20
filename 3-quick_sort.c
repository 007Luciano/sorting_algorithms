#include "sort.h"

void exchange_values(int *a, int *b);
int segment_partition(int *array, size_t size, int left, int right);
void segment_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * exchange_values - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void exchange_values(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * segment_partition - Order a subset of an array of integers by segment
 * @array: The array of integers
 * @size: The size of the array
 * @left: The starting index of the subset to order
 * @right: The ending index of the subset to order
 * Return: The final partition index
 */
int segment_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				exchange_values(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		exchange_values(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * segment_sort - Implement the quicksort algorithm through recursion
 * @array: An array of integers to sort
 * @size: The size of the array
 * @left: The starting index of the array partition to order
 * @right: The ending index of the array partition to order
 */
void segment_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = segment_partition(array, size, left, right);
		segment_sort(array, size, left, part - 1);
		segment_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order
 * @array: An array of integers
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	segment_sort(array, size, 0, size - 1);
}
