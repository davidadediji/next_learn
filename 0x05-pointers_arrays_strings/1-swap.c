#include "main.h"

/**
 * swap_int - check the code
 *@a:first pointer
 *@b: second pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}
