#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that determines if a node is a root
 * @node: Node
 * Return: 1 Success isRoot
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
