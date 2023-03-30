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
	int cnt;

	cnt = 0;
	while (src[cnt] != '\0' && cnt < n)
	{
		cnt++;
	}
	for (i = 0 ; i < cnt ; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
