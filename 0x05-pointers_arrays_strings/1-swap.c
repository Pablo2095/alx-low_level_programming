#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: value number 1
 * @b: value number 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
