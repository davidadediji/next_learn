#include "main.h"
/**
 * print_square - function to print a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int i;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size - 1; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
