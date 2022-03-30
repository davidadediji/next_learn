#include "main.h"
/**
 *_puts_recursion - function to print string followed by newline
 *@s:unsigned character
 */
void _puts_recursion(char *s)
{
	unsigned int i;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_putchar('\n');
	}
	_puts_recursion(s);
}
