#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: number
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	number = binary_tree_size(tree->left);
	number = number + binary_tree_size(tree->right) + 1;

	return (number);
}
