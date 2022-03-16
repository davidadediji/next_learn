#include <stdio.h>
#include "main.h"
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
				printf("%d, ",i);
			}
			else if (n == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ",i);
			}
			else if (n == 98)
			{
				printf("%d\n", i);
			}
		}
	}
}
