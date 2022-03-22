#include "main.h"

/**
 * puts2 - a function
 * @str : string to be printed
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
