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
	int i;
	int mul;

	mul = 1;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%i\n", mul);
		(void)argv;
		return (0);
		}
}
