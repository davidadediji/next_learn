#include "main.h"

/**
 *print_diagonal - function to print diagonal
 *@n: variable required 
 */

void print_diagonal(int n)
{
	int row, column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column < n; column++)
			{
				if (row == column)
				{
					_putchar('\\');
				}
				else if (column < row)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}