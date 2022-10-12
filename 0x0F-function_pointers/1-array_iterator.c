#include "function_pointers.h"

/**
  * array_iterator - callbacks a function to
  * and executes function on each element of a array
  * @array: pointer to array
  * @size: size of array
  * @action: pointer to a passed-in function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
