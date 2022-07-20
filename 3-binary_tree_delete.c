#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: is a pointer to the root node of the tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return;

	left = tree->left;
	if (left != NULL)
		binary_tree_delete(left);

	right = tree->right;
	if (right != NULL)
		binary_tree_delete(right);

	free(tree);
}
