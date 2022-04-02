#include "main.h"
/**
 * _isalpha - checks for alphabets
 *@c: the character to check
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{

	if (('z' >= c && 'a' <= c) || ('Z' >= c && 'A' <= c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
