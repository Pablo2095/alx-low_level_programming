#include <stdio.h>
/**
 * main - Entry point
 * print the lowercase alphabet in reverse.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 122;

	while (p >= 97)
	{
		putchar(p);
		p--;
	}
	putchar('\n');
	return (0);
}
