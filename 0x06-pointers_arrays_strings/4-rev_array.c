#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Input the array
 * @n: Input the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p;
	int s;

	for (p = 0; p < n--; p++)
	{
		s = a[p];
		a[p] = a[n];
		a[n] = s;
	}
}
