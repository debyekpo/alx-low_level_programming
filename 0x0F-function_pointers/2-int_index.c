#include "function_pointers.h"

/**
* int_index - Searches for an integer
*
* @array: An array of integers
*
* @size: Number of elements in the @array
*
* @cmp: Pointer to the function to be used to compare values
*
* Return: Integers, index integer in @array that matches
* condition of @cmp was found (SUCCESS) or
* -1 if size <= 0 or integer that matches condition of @cmp
*  wasn't found in @array or
*  NULL if @array || @cmp is NULL
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

        res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))

			{
				return (res);
			}
		}
	}
	return (res);
}
