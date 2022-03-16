#include "main.h"
/**
 * print_last_digit - function to print the last number
 * @c: input accepted
 * Return: returns the value of last digit
 */
int print_last_digit(int n)
{
	char a;
	a = n % 10;

	if (a < 0)
	{
		a = -a;
		_putchar(a);
	}
	else
	{
		_putchar(a);
	}
	return (a);
}
