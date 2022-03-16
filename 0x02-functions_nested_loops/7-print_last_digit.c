#include "main.h"
/**
 * print_last_digit - function to print the last number
 * @n: input accepted
 * Return: returns the value of last digit
 */
int print_last_digit(int n)
{
	char a;

	a = n % 10;

	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
	}
	else
	{
		_putchar(a + '0');
	}
	return (a);
}
