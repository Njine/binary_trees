#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parentNode: Parent node.
 * @value: Value to be stored in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parentNode, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parentNode;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
