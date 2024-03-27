#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns # of nodes in a tree with children
 * @tree: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  new_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		new_node += ((tree->left || tree->right) ? 1 : 0);
		new_node += binary_tree_nodes(tree->left);
		new_node += binary_tree_nodes(tree->right);
		return (new_node);
	}
}
