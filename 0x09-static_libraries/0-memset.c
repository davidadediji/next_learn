#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory area poi
 * @s:array
 * @b:address of memory you want to print
 * @n: size of memory to print
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
