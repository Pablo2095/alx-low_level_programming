#include <stdio.h>
/**
 * main - Print alphabets in lowercase and upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char b;

	char s;

	b = 'a';
	s = 'A';
        while
		(b <= 'k')
		{
			 putchar(b);
			 b++;
		}
	while
		(s <= 'k')
		{
			putchar(s);
			s++;
		}
	putchar('\n');
        return (0);
}
