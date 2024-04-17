#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling
 * @node: - the node for searching
 * Return: - null or sibling
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->left == node)
		{
			node = node->parent->right;
			if (node != NULL)
			{
				return (node);
			}
		}
		else if (node->parent->right == node)
		{
			node = node->parent->left;
			if (node != NULL)
			{
				return (node);
			}
		}
		return (NULL);
	}
	return (NULL);
}
