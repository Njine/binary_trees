#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 *
 * @parentNode: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parentNode, int value)
{
	binary_tree_t *newNode;

	if (parentNode == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parentNode;
	newNode->right = NULL;

	if (parentNode->left == NULL)
	{
		parentNode->left = newNode;
		newNode->left = NULL;
	}
	else
	{
		newNode->left = parentNode->left;
		parentNode->left->parent = newNode;
		parentNode->left = newNode;
	}
	return (newNode);
}
