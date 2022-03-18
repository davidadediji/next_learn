#include "main.h"
/**
 * print_most_numbers - function to print out numbers except 2 and 4
 * the _putchar is used twice only
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (n != 2 || n != 4)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
