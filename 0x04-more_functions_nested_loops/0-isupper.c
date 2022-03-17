#include "main.h"
/**
 * _isupper - check for uppercase characters
 * @c: variable required
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
