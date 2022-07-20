#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: the parent of the next node
 * @value: the node value
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = parent->left;
	parent->left = tmp;

	if (tmp->left != NULL)
		tmp->left->parent = tmp;

	tmp->right = NULL;

	return (tmp);
}
