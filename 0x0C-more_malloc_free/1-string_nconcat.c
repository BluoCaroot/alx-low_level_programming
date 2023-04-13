#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to add
 * @n: number of characters to add from s2
 * Return: NULL if failed pointer to new string if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a, b, j;
	char *ptr;

	a = 0;
	while (s1 && s1[a] != '\0')
		a++;
	b = 0;
	while (s2 && s2[b] != '\0')
		b++;
	if (n >= b)
		ptr = malloc(a + b + 1);
	else
		ptr = malloc(a + n + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < a; ++i)
		ptr[i] = s1[i];
	if (n < b)
		for (j = 0; i < a + n; ++i, j++)
			ptr[i] = s2[j];
	else 
		for (j = 0; i < a + b; ++i, j++)
			ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
