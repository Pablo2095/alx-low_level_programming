#include <stdio.h>
/**
 * main - Entry point
 * print all possible different combinations of two digits
 * Return: Always(0)
 */
int main(void)
{
	int p;
	int s;
	
	for (p = 48; p++)
	{
		putchar(p);
	}

	for (s = 49; s <= 57; s++)
	{
		putchar(s);
		if (s == 49)
		{
			continue;
		}
		putchar(s + 'p');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
