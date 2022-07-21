#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: number
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
		number++;

	if (tree->right != NULL)
		number++;

	return (number);
}
