#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root or not
 * @node: - node for to check
 * Return: - 1 for root and 0 for fail
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
	{
		return (0);
	}
	return (1);
}
