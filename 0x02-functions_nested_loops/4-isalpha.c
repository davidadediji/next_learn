#include "main.h"
/**
 * _isalpha - checks for alphabets
 *@c: the character to check
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{
	int i = 'A';
	int j = 'a';

	if (i <= c && j <= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
