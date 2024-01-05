#include "binary_trees.h"


/**
 * binary_tree_size -  measures the size of a binary tree.
 * @tree: ptr to the root of the tree.
 *
 * Return: the size.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, R = 0, L = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		L = binary_tree_size(tree->left);
		R = binary_tree_size(tree->right);
		s = R + L + 1;
	}
	return (s);
}
