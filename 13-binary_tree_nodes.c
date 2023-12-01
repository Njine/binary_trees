#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0.
 *         Else return the count of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/* Check if tree is NULL */
	if (tree)
	{
		/* Increment count if the node has at least 1 child */
		count += (tree->left || tree->right) ? 1 : 0;

		/* Recursively count nodes in the left subtree */
		count += binary_tree_nodes(tree->left);

		/* Recursively count nodes in the right subtree */
		count += binary_tree_nodes(tree->right);
	}

	return (count);
}
