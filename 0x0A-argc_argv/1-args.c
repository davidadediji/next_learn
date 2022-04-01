#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that accepts arguments
 *@argc:argument count
 *@argv: argument variables
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);
	(void)argv;
	return (0);
}
