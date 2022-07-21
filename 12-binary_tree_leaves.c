#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: the root node of the tree to count the number of leaves
 * Return: the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	number = binary_tree_leaves(tree->left);
	number = number + binary_tree_leaves(tree->right);

	return (number);
}
