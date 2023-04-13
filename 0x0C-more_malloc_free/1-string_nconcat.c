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
	int i, a, b;
	char *ptr;

	a = 0;
	if (s1 != NULL)
		while (s1[a] != '\0')
			a++;
	b = 0;
	if (s2 != NULL)
		while (s2[b] != '\0')
			b++;
	if (n >= b)
		n = b;
	ptr = malloc(a + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a; ++i)
		ptr[i] = s1[i];
	for (; i < a + n; ++i)
		ptr[i] = s1[i - a];
	ptr[i] = '\0';
	return (ptr);
}
