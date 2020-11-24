#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if a node is a leaf node.
 * @node: node to check.
 * Return: 1 (node is a leaf node) 0 (node is not a leaf node)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);

	return (1);
}
