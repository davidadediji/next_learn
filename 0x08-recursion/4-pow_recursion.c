#include "main.h"
/**
 *_pow_recursion - function to print a string in reverse
 *@x:first integer
 *@y:second integer
 *Return:int-type
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		result *= _pow_recursion(x, y - 1);
	}
	return (result);

}
