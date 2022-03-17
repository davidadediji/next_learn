#include "main.h"
/**
 * _isupper - check for uppercase characters
 * @c: variable required
 * Return: Always 0 or 1
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
