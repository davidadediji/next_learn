#include "main.h"

/**
 * print_numbers - print numbers
 * Return: Always 0 or 1
 */

void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
