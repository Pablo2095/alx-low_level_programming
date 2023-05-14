#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int p;
	int s;


	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[p] = src[s];
		p++;
		s++;
	}		


	dest[p] = '\0';
	return (dest);
}
