#include "binary_trees.h"

/**
 * binary_tree_size - function that returns the size of a tree
 * @tree: tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t = r_branch = 0, l_branch = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_branch = binary_tree_size(tree->left);
		r_branch = binary_tree_size(tree->right);
		size = r_branch + l_branch + 1;
	}
	return (size);
}
