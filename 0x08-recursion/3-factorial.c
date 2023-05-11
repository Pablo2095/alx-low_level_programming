#include "main.h"
/**
 * factorial - Return the  factorial of a given number
 * @n: Input
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
