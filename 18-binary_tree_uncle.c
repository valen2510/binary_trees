#include "binary_trees.h"
/**
* binary_tree_uncle - Function that finds the uncle of a node.
* @node: root node.
* Return: uncle node (If suncle found) NULL (No uncle found)
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (!node->parent->parent->right || !node->parent->parent->left)
		return (NULL);

	if (node->parent->parent->right != node->parent)
		uncle_node = node->parent->parent->right;
	else
		uncle_node = node->parent->parent->left;

	return (uncle_node);
}
