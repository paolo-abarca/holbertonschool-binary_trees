#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	int value;
	binary_tree_t *left;
	binary_tree_t *right;

	value = tree->n;
	func(value);

	left = tree->left;
	binary_tree_preorder(left, func);

	right = tree->right;
	binary_tree_preorder(right, func);
}
