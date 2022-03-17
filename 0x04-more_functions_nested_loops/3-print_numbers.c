#include "main.h"
/**
 * print_most_numbers - check for uppercase characters
 * Return: Always 0 or 1
 */
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
