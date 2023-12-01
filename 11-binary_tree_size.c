#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree.
 *         If @tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* Check if tree is NULL */
	if (tree)
	{
		/* Increment size for the current node */
		size += 1;

		/* Recursively add the size of the left subtree */
		size += binary_tree_size(tree->left);

		/* Recursively add the size of the right subtree */
		size += binary_tree_size(tree->right);
	}

	return (size);
}
