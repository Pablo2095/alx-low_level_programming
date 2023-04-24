#include <stdio.h>

/**
 * main - Print all the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int p;

	for (p = 0; p < 26; p++)
	{
		putchar(alp[p]);
	}
	putchar('\n');
	return (0);
}
