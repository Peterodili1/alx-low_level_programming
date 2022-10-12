#include "function_pointers.h"
#include <stdlib.h>

/**
*array_iterator - executes a func given as a param on each element of array
*@array: array to execute func on*@size: size of array
@action: pointer to the func to use
Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
