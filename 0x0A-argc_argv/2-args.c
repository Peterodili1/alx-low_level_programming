#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments in the program receives.
 *
 * @argc: number of argument
 *
 * @argv: array of argument.
 *
 * Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%d\n", argv[n]);
	}
	return (0);
}
