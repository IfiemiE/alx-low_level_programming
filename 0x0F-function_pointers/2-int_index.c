#include "function_pointers.h"

/**
  * int_index - returns first index of an array
  * for which a passed-in function does not return 0
  * @array: passed-in array argument pointer
  * @size: size of the array
  * @cmp: a passed-in function to compare values
  * Return: index of an array at which a match is found
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, found = 0, index;

	if (array && (size > 0) && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				index = i;
				found = 1;
				break;
			}
		}
	}
	if ((found == 0) || (size <= 0))
		index = -1;

	return (index);
}
