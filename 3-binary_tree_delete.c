#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a node from tree
 * @tree: - the node is entered for deleting
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->parent != NULL)
		{
			free(tree->parent);
			tree->parent = NULL;
		}
		if (tree->right != NULL)
		{
			free(tree->right);
			tree->right = NULL;
		}
		if (tree->left != NULL)
		{
			free(tree->left);
			tree->left = NULL;
		}
		free(tree);
	}
}
