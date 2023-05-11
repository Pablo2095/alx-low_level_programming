#include "main.h"
/**
 * _pow_recursion - Return the value of x raised to the power of y
 * @x: The value needed to be raised
 * @y: The power
 * Return: The result of the power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return  (x * _pow_recursion(x, y - 1));
}
