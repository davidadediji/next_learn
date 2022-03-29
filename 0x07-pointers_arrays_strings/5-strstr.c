#include "main.h"

/**
 * _strstr - a function
 * @haystack: first string
 * @needle: second string
 * Return: a pointer to memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, z;
	int len;

	i = 0;
	z = 0;
	len = 0;

	while (haystack[len] != '\0')
	{
		len++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++, i++)
		{
			if (haystack[i] == needle[j])
				z += 1;
		}
		if (z == len)
			return (haystack + [i - z]);
	}
	return (NULL);
}

