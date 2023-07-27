#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < --n; i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
