#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j = 'a';
	while (j <= 'z')
	{
		if (j == 'q' || j == 'e')
		{
			continue;
		}
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
