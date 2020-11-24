#include "binary_trees.h"

/**
* binary_tree_insert_right - Function that inserts a new node
* as the right-child of another node.
* @parent: parent node.
* @value: integer value of new node.
* Return: new node (Success) NULL (Failure)
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	new_node->parent->right = new_node;
	return (new_node);
}
