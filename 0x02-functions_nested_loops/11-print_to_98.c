#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print
 * @n:natural numbers
 * Return: numbers from 0 to 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
