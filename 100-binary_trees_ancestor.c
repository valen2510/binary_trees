#include "binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 * Return: lowest common ancestor node (If found) NULL (Not found).
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t first_depth = 0;
	size_t second_depth = 0;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *) first);

	first_depth = tree_depth(first);
	second_depth = tree_depth(second);

	if ((first_depth > second_depth) && first->parent)
		return (binary_trees_ancestor(first->parent, second));
	else if ((first_depth < second_depth) && second->parent)
		return (binary_trees_ancestor(first, second->parent));
	else if ((first->parent && second->parent) && (first_depth == second_depth))
		return (binary_trees_ancestor(first->parent, second->parent));

	return (NULL);
}
/**
 * tree_depth - function that measures the depth of a node
 * in a binary tree.
 * @tree: root node.
 * Return: the depth of the node in a binary tree or 0 if there is no tree.
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth_node = tree_depth(tree->parent) + 1;
	return (depth_node);
}
