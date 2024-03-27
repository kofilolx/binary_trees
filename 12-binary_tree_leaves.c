#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the sum of leaves in a tree
 * @tree: tree to traverse
 * Return: Sum of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;
	size_t l_leaf = 0;
	size_t r_leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l_leaf = binary_tree_leaves(tree->left);
		r_leaf = binary_tree_leaves(tree->right);
		leaf = l_leaf + r_leaf;
		return ((!l_leaf && !r_leaf) ? leaf + 1 : leaf + 0);
	}
}
