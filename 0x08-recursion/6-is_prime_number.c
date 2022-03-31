#include "main.h"
/**
 *_is_prime_number - function that returns 1 if interger value is a prime number and returns 0 when not.
 *@n:integer to test
 *Return:int
 */
int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0 && n / 1 == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
