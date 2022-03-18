#include "main.h"

/**
 * print_numbers - print numbers
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
