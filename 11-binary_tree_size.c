#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Size of the binary tree. If @tree is NULL, the function returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 (empty tree) */
	if (!tree)
		return (0);

	/* Calculate the size recursively by summing the sizes of the left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/* Return the total size, which includes the current node */
	return (left_size + right_size + 1);
}
