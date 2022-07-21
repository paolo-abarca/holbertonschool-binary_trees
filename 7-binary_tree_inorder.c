#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int value;
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL || func == NULL)
		return;

	value = tree->n;
	left = tree->left;
	right = tree->right;

	binary_tree_inorder(left, func);
	func(value);
	binary_tree_inorder(right, func);
}
