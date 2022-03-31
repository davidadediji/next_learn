#include "main.h"
/**
 *_strlen_recursion - function to print a string in reverse
 *@s:unsigned character
 *Return:int-type
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		return 1 +_strlen_recursion(s + 1);
	}
	else if (*s == '\0')
		return (0);
}
