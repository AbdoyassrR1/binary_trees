#include "binary_trees.h"


/**
 * bst_insert -  inserts a value in a Binary Search Tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 *
 * Return: BST tree
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *n, *temp;
	binary_tree_t *aux;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		aux = binary_tree_node((binary_tree_t *)(*tree), value);
		n = (bst_t *)aux;
		*tree = n;
	}
	else
	{
		temp = *tree;
		if (value < temp->n)
		{
			if (temp->left)
				n = bst_insert(&temp->left, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				n = temp->left = (bst_t *)aux;
			}
		}
		else if (value > temp->n)
		{
			if (temp->right)
				n = bst_insert(&temp->right, value);
			else
			{
				aux = binary_tree_node((binary_tree_t *)temp, value);
				n = temp->right = aux;
			}
		}
		else
			return (NULL);
	}

	return (n);
}
