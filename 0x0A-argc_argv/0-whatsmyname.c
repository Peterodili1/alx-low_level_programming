#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * if you rename the program, it will print the new name, without having to
 * compile it again
 * you should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argc: This is the argument vector
 *
 * Return: this return to 0
 */
int main(int argc, char *argc[])
{
	printf("%s\n", argc[]);
	(void)argc;
	return (0);
}
