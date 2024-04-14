#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *free_node,  *new_node = malloc(sizeof(binary_tree_t));
  
  if (new_node == NULL)
  {
	  return NULL;
  }
  new_node->n = value;
  new_node->left = NULL;
  new_node->right = NULL;

  if (parent == NULL)
  {
    return (NULL);
  }
  else
  {
	  if (parent->left == NULL)
	  	parent->left = new_node;
	  else
	  {
		  free_node = parent->left;
		  parent->left = new_node;
		  new_node->left = free_node;
	  }
  }
  return parent;
}
