#include "main.h"
#include <stdio.h>

/**
 *  _isupper - check for uppercase character
 * @p: the number to be checked
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int p)
{

	if (p >= 65 && p <= 90)
	{
	return (1);
	}
	return (0);
}
