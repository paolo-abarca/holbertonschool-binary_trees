#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling
 * Return: the sibling of a node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node == node->parent->left)
		return (node->parent->right);

	if (node->parent->right != NULL && node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}
