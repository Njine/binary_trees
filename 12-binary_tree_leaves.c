#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Number of leaves in the binary tree. If @tree is NULL, the function returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 (empty tree) */
	if (!tree)
		return (0);

	/* Calculate the number of leaves recursively by summing the leaves of the left and right subtrees */
	size_t leaves_left = binary_tree_leaves(tree->left);
	size_t leaves_right = binary_tree_leaves(tree->right);

	/* Return the total number of leaves, adding 1 for the current node if it is a leaf */
	return (leaves_left + leaves_right + (tree->left == NULL && tree->right == NULL ? 1 : 0));
}
