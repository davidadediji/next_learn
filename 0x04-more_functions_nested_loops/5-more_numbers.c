#include "main.h"

/**
 * more_numbers - function to print 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int row = 0, column;

	while (row < 10)
	{
		_putchar('0');

		column = 1;

		while (column < 15)
		{
			if (column >= 10)
			{
				_putchar(column / 10 + '0');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
