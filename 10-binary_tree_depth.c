#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree.
 * @tree: root node.
 * Return: the depth of the node in a binary tree or 0 if there is no tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth_node = binary_tree_depth(tree->parent) + 1;
	return (depth_node);
}
