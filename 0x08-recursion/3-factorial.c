#include "main.h"
/**
 *factorial - function to print a string in reverse
 *@n:unsigned character
 *Return:int-type
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
