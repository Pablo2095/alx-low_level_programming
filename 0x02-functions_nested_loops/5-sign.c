#include "main.h"
/**
 * print_sign - Print the sign of the number
 * @c: The number is checked
 * Return: 1 for positive number ,-1 for negative number  or 0 otherwise
 */
int print_sign(int n)

{
	if  (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if(n  < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
