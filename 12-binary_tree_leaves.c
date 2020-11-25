#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: root node.
 * Return: number of leaves of a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	/*If tree is NULL, the function return 0*/
	if (!tree)
		return (0);

	/*If found a node with no children in binary tree, add + 1 to n_leaves*/
	if (tree->left == NULL && tree->right == NULL)
		n_leaves++;
	/* Otherwise, transverse the left sub-trees and right sub-trees*/
	else
		n_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (n_leaves);
}
