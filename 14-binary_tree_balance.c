#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree.
 * @tree: root node.
 * Return: balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
/**
 * tree_height - function that measures the height of a sub-tree.
 * @tree: root node.
 * Return: the height of the tree or -1 if there is no tree.
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		left_height = tree_height(tree->left) + 1;
	if (tree->right)
		right_height = tree_height(tree->right) + 1;

	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}
