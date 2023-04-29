#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit (0 through 9).
 * @p: check for the number
 * Return: 1 if p is a digit or 0 otherwise
 */
int _isdigit(int p)
{
	if (p >= 48 && p <= 57)
	{
	return (1);
	}
	return (0);
}
