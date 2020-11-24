#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using pre-order traversal.
 * @tree: root node.
 * @func: function pointer to print the value of each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	/* Transverse the left sub-tree first.*/
	binary_tree_preorder(tree->left, func);

	/* Transverse the left sub-tree first.*/
	binary_tree_preorder(tree->right, func);
}
