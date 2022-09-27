#include "main.h"
#include <stdio.h>
/**
 * print _diagrams - prints sum of two diagonals of a square.
 * @a: pointer to array.
 * @size: size of array
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, size;
	unsigned int sumDiag1, sumDiag2;

	size1 = 0;
	sunDiag1 = 0;
	sumDiag2 = 0;

	size = (size * size) - 1;

	for (i = 0; i <= size; i = i + (size + 1))
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
