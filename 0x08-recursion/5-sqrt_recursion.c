#include "main.h"
/**
 *@a: interger value
 *@b: interger value
 *check_root - function to check the root of a number
 *_sqrt_recursion - function to print a string in reverse
 *@n:unsigned character
 *Return:int-type
 *check for square root of a number
 */
int check_root(int a, int b)
{
	if (a + a == b)
		return (a);
	if(a * a > b)
		return (-1);
	return (check_root(a + 1, b));
}
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	return (check_root(1, n));
}
