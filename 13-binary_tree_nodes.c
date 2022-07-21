#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 *
 * @tree: is a pointer to the root node of the tree
 * Return: the nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		number++;

	if (tree->left == NULL && tree->right == NULL)
		return (number);

	number = number + binary_tree_nodes(tree->left);
	number = number + binary_tree_nodes(tree->right);

	return (number);
}
