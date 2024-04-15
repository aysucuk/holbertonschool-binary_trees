#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
  if (tree != NULL)
  {
    if (tree->parent != NULL)
    {
      tree->parent = NULL;
    }

    if (tree->right != NULL)
    {
      tree->right = NULL;
    }

    if (tree->left != NULL)
    {
      tree->left = NULL;
    }
    free(tree);
  }
}
