#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: If node is NULL or has no uncle, return NULL.
 * Otherwise, return a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		/* Return NULL if node is NULL or has no parent or grandparent. */
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		/*
		 * If node's parent is a left child,
		 * return the right child of the grandparent.
		 */
		return (node->parent->parent->right);
	}

	/*
	 * If node's parent is a right child,
	 * return the left child of the grandparent.
	 */
	return (node->parent->parent->left);
}
