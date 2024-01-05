#include "binary_trees.h"


/**
 * array_to_bst - builds a Binary Search Tree from an array.
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 *
 * Return: BST tree from array.
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t index = 0;
	bst_t *r;

	r = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	for (; index < size; index++)
	{
		if (index == 0)
		{
			bst_insert(&r, array[index]);
		}

		else
		{
			bst_insert(&r, array[index]);
		}
	}
	return (r);
}
