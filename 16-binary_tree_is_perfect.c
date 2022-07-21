#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 * Return: if a binary tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: number
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	return (right);
}
