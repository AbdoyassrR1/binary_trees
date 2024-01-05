#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: ptr to the root of the tree
 *
 * Return: no thing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
