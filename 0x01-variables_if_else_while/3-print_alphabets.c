#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char j = 'a';
	char i = 'A';
	
	while (j <= 'z')
	{
		putchar(j);
	}
	while (i <= 'Z')
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
