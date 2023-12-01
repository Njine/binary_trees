#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 *
 * @parentNode: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parentNode, int value)
{
	binary_tree_t *newNode;

	if (parentNode == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parentNode;
	newNode->left = NULL;

	if (parentNode->right == NULL)
	{
		parentNode->right = newNode;
		newNode->right = NULL;
	}
	else
	{
		newNode->right = parentNode->right;
		parentNode->right->parent = newNode;
		parentNode->right = newNode;
	}
	return (newNode);
}
