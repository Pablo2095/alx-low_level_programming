#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *aaa;
	int p, b = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;

	aaa = malloc(sizeof(char) * (p + 1));

	if (aaa == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		aaa[b] = str[b];
	return (aaa);
}
