#include <stdio.h>
/**
 * main - Entry point
 * print the lowercase alphabets.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 97;
	int s = 122;

	for (p = 97; p <= 122; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
