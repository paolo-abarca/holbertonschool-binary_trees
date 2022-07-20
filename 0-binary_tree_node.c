#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: the parent of the next node
 * @value: the node value
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}
