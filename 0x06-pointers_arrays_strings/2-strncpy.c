#include "main.h"
/**
 * _strncpy - copies a string to another
 * @dest: input value
 * @src: input value
 * n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	do
	{
		dest[i] = '\0';
	}
	while (i < n);
	return (dest);
}
