#include "main.h"
/**
 * print_most_numbers - function to print out numbers except 2 and 4
 * the _putchar is used twice only
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
