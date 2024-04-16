#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of given node
 * @tree: - input of root node
 * Return: the height of node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
}
