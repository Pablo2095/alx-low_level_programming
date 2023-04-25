#include <stdio.h>
/**
 * main - Entry point
 * print alphabets except q and e
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int p = 97;

	while (p <= 122)
	{
		if (p == 101 || p == 113)
		{
			p++;
			continue;
		}
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
