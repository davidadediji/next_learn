#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print
 * @n:natural numbers
 * Return: numbers from 0 to 98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n++)
		{
			if (n != 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
		}
	}
	else if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n == 98)
			{
				_putchar(n + '0');
				_putchar('\n');
			}
		}
	}
}
