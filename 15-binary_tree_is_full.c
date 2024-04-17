#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
	{
		return 1;
	}
	else if (tree->left == NULL && tree->right == NULL && tree->parent != NULL)
	{
		return 1;
	}
	return 0;
}
