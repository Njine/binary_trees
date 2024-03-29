#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree.
 *         If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* Check if tree is NULL */
	if (tree)
	{
		/* Increment leaves if the node is a leaf */
		leaves += (!tree->left && !tree->right) ? 1 : 0;

		/* Recursively count the leaves in the left subtree */
		leaves += binary_tree_leaves(tree->left);

		/* Recursively count the leaves in the right subtree */
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
