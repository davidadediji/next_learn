#include "main.h"
/**
 * @*s:array
 * @b:address of memory you want to print
 * @n: siz of memory to print
 * return s
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
