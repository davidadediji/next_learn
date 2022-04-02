#include "main.h"

/**
 * _isdigit - check if a number is a digit between 0 and 9
 * @c: variable required
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
