#include "main.h"
/**
 *is_prime_number - function that returns 1 or 0 for prime values
 *@n:integer to test
 *Return:int
 */
int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0 && n / 1 == n && n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
