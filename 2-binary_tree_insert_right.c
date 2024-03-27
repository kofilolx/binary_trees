#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node to the right of the parent
 * if it exists it moves down one level and adds a new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
