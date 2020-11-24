#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: root node.
 * @func: function pointer to print the node value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Transverse the left sub-tree first.*/
	binary_tree_postorder(tree->left, func);

	/* Transverse the right sub-tree then.*/
	binary_tree_postorder(tree->right, func);

	/* Print the parent(root) or child of the tree or sub-tree.*/
	func(tree->n);
}
