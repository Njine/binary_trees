#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node. If node is NULL or the parent is
 *         NULL, returns NULL. If node has no sibling, returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (!node || !(node->parent))
	{
		return (NULL);
	}

	/*
	 * Determine the sibling based on whether the node
	 * is the left or right child
	 */
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
